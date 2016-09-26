<?hh
namespace Plenty\Plugin\Http;


/**
 * Class to create different types of http response.
 */
abstract class Response 
{

	/**
	 * Return a new response from the application.
	 */
	abstract public function make(
		?string $content = "", 
		?int $status = 200, 
		?array<string, string> $headers = []
	):mixed;

	/**
	 * Return a new view response from the application.
	 */
	abstract public function view(
		string $view, 
		?array<string, mixed> $data = [], 
		?int $status = 200, 
		?array<string, string> $headers = []
	):mixed;

	/**
	 * Return a new JSON response from the application.
	 */
	abstract public function json(
		mixed $data = "[]", 
		?int $status = 200, 
		?array<string, string> $headers = [], 
		?int $options = 0
	):mixed;

	/**
	 * Return a new JSONP response from the application.
	 */
	abstract public function jsonp(
		string $callback, 
		mixed $data = "[]", 
		?int $status = 200, 
		?array<string, string> $headers = [], 
		?int $options = 0
	):mixed;

	/**
	 * Return a new streamed response from the application.
	 */
	abstract public function stream(
		callable $callback, 
		?int $status = 200, 
		?array<string, string> $headers = []
	):mixed;

	/**
	 * Create a new file download response.
	 */
	abstract public function download(
		string $file, 
		?string $name = null, 
		?array<string, string> $headers = [], 
		?string $disposition = "attachment"
	):mixed;

	/**
	 * Return the raw contents of a binary file.
	 */
	abstract public function file(
		string $file, 
		?array<string, string> $headers = []
	):mixed;

	/**
	 * Create a new redirect response to the given path.
	 */
	abstract public function redirectTo(
		string $path, 
		?int $status = 302, 
		?array<string, string> $headers = [], 
		?bool $secure = null
	):mixed;

	/**
	 * Create a new redirect response to a named route.
	 */
	abstract public function redirectToRoute(
		string $route, 
		?array<string> $parameters = [], 
		?int $status = 302, 
		?array<string, string> $headers = []
	):mixed;

	/**
	 * Create a new redirect response to a controller action.
	 */
	abstract public function redirectToAction(
		string $action, 
		?array<string> $parameters = [], 
		?int $status = 302, 
		?array<string, string> $headers = []
	):mixed;

	/**
	 * Create a new redirect response, while putting the current URL in the session.
	 */
	abstract public function redirectGuest(
		string $path, 
		?int $status = 302, 
		?array<string, string> $headers = [], 
		?bool $secure = null
	):mixed;

	/**
	 * Create a new redirect response to the previously intended location.
	 */
	abstract public function redirectToIntended(
		?string $default = "/", 
		?int $status = 302, 
		?array<string, string> $headers = [], 
		?bool $secure = null
	):mixed;

}