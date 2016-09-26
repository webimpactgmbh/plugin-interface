<?hh
namespace Plenty\Plugin\Events;

use Plenty\Modules\Basket\Models\BasketItem;

/**
 * Dispatcher
 */
abstract class Dispatcher 
{

	const string PLUGIN_NAMESPACE_PREFIX = 'plenty';

	/**
	 * Register an event listener with the dispatcher.
	 */
	abstract public function listen(
		string $event, 
		mixed $listener, 
		int $priority = 0
	):void;

	/**
	 * Determine if a given event has listeners.
	 */
	abstract public function hasListeners(
		string $event
	):bool;

	/**
	 * Fire an event and call the listeners.
	 */
	abstract public function fire(
		string $event, 
		?array<mixed> $payload = []
	):void;

	/**
	 * Remove a set of listeners from the dispatcher.
	 */
	abstract public function forget(
		string $event
	):void;

}