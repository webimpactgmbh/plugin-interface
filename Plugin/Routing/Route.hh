<?hh
namespace Plenty\Plugin\Routing;


/**
 * Route
 */
abstract class Route 
{

	/**
	 * Add middlewares attached to the route.
	 */
	abstract public function addMiddleware(
		array<string> $middleware
	):Route;

	abstract public function getMiddleware(
	):array<string>;

	abstract public function where(
		string $name, 
		mixed $expression = NULL
	):Route;

}