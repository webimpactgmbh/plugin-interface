<?hh
namespace Plenty\Plugin\Http;
use Symfony\Component\HttpFoundation\Request as SymfonyRequest;

/**
 * http request
 */
abstract class Request{
	/**
	 * Get all of the input and files for the request.
	 */
	abstract public function all(
	):array<string, mixed>;
	/**
	 * Merge new input into the current request's input array.
	 */
	abstract public function merge(
		array<string, mixed> $input
	):void;
	/**
	 * Replace the input for the current request.
	 */
	abstract public function replace(
		array<string, mixed> $input
	):void;
	abstract public function get(
		string $key,
		mixed $default = NULL,
		bool $deep = false
	):mixed;
}