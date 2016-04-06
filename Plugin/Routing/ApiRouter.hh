<?hh
namespace Plenty\Plugin\Routing;

use Dingo\Api\Routing\Router;

/**
 * Api router service
 */
abstract class ApiRouter 
{

	abstract public function version(
		array<string> $version, 
		mixed $second, 
		mixed $third = NULL
	):void;

	/**
	 * Register a new GET route with the router.
	 */
	abstract public function get(
		string $uri, 
		mixed $action
	):\Plenty\Plugin\Routing\Route;

	/**
	 * Register a new POST route with the router.
	 */
	abstract public function post(
		string $uri, 
		mixed $action
	):\Plenty\Plugin\Routing\Route;

	/**
	 * Register a new PUT route with the router.
	 */
	abstract public function put(
		string $uri, 
		mixed $action
	):\Plenty\Plugin\Routing\Route;

	/**
	 * Register a new PATCH route with the router.
	 */
	abstract public function patch(
		string $uri, 
		mixed $action
	):\Plenty\Plugin\Routing\Route;

	/**
	 * Register a new DELETE route with the router.
	 */
	abstract public function delete(
		string $uri, 
		mixed $action
	):\Plenty\Plugin\Routing\Route;

	/**
	 * Register a new OPTIONS route with the router.
	 */
	abstract public function options(
		string $uri, 
		mixed $action
	):\Plenty\Plugin\Routing\Route;

	/**
	 * Register a new route responding to all verbs.
	 */
	abstract public function any(
		string $uri, 
		mixed $action
	):\Plenty\Plugin\Routing\Route;

	/**
	 * Register a new route with the given verbs.
	 */
	abstract public function match(
		array<string> $methods, 
		string $uri, 
		mixed $action
	):\Plenty\Plugin\Routing\Route;

}