<?hh
namespace Illuminate\Http;

use Exception;
use ArrayObject;
use JsonSerializable;
use Illuminate\Contracts\Support\Jsonable;
use Illuminate\Contracts\Support\Renderable;
use Symfony\Component\HttpFoundation\Response as BaseResponse;

class Response extends Symfony\Component\HttpFoundation\Response 

{
	public mixed $original;
	public ?\Exception $exception;
	
	/**
	 * Set the content on the response.
	 */
	public function setContent(
		mixed $content
	):Response
	{
		$this->original = $content;

        // If the content is "JSONable" we will set the appropriate header and convert
        // the content to JSON. This is useful when returning something like models
        // from routes that will be automatically transformed to their JSON form.
        if ($this->shouldBeJson($content)) {
            $this->header('Content-Type', 'application/json');

            $content = $this->morphToJson($content);
        }

        // If this content implements the "Renderable" interface then we will call the
        // render method on the object so we will avoid any "__toString" exceptions
        // that might be thrown and have their errors obscured by PHP's handling.
        elseif ($content instanceof Renderable) {
            $content = $content->render();
        }

        return parent::setContent($content);
	}

	/**
	 * Morph the given content into JSON.
	 */
	public function morphToJson(
		mixed $content
	):string
	{
		if ($content instanceof Jsonable) {
            return $content->toJson();
        }

        return json_encode($content);
	}

	/**
	 * Determine if the given content should be turned into JSON.
	 */
	public function shouldBeJson(
		mixed $content
	):bool
	{
		return $content instanceof Jsonable ||
               $content instanceof ArrayObject ||
               $content instanceof JsonSerializable ||
               is_array($content);
	}

	/**
	 * Get the original response content.
	 */
	public function getOriginalContent(
	):mixed
	{
		return $this->original;
	}

	/**
	 * Set the exception to attach to the response.
	 */
	public function withException(
		\Exception $e
	):Response
	{
		$this->exception = $e;

        return $this;
	}

	/**
	 * Get the status code for the response.
	 */
	public function status(
	):int
	{
		return $this->getStatusCode();
	}

	/**
	 * Get the content of the response.
	 */
	public function content(
	):string
	{
		return $this->getContent();
	}

	/**
	 * Set a header on the Response.
	 */
	public function header(
		string $key, 
		string $value, 
		bool $replace = true
	):Response
	{
		$this->headers->set($key, $value, $replace);

        return $this;
	}

	/**
	 * Add an array of headers to the response.
	 */
	public function withHeaders(
		array<string> $headers
	):Response
	{
		foreach ($headers as $key => $value) {
            $this->headers->set($key, $value);
        }

        return $this;
	}

	/**
	 * Add a cookie to the response.
	 */
	public function cookie(
		mixed $cookie
	):Response
	{
		return call_user_func_array([$this, 'withCookie'], func_get_args());
	}

	/**
	 * Add a cookie to the response.
	 */
	public function withCookie(
		mixed $cookie
	):Response
	{
		if (is_string($cookie) && function_exists('cookie')) {
            $cookie = call_user_func_array('cookie', func_get_args());
        }

        $this->headers->setCookie($cookie);

        return $this;
	}

	/**
	 * Throws the response in a HttpResponseException instance.
	 */
	public function throwResponse(
	):void
	{
		throw new HttpResponseException($this);
	}

}