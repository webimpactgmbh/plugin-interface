<?hh
namespace Plenty\Modules\Order\Contracts;

use Plenty\Modules\Order\Models\Order;
use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Exceptions\ValidationException;
use Plenty\Modules\Order\Scheduler\Models\OrderScheduler;
use Plenty\Repositories\Contracts\FilterableContract;
use Plenty\Repositories\Models\PaginatedResult;

/**
 * The OrderRepositoryContract is the interface for the order repository. This interface allows you to find, create and update orders. There are many different order types and the data returned depends on the order type.
 */
interface OrderRepositoryContract 
{

	/**
	 * Get an order
	 */
	public function findOrderById(
		int $orderId, 
		?array<string> $with = []
	):Order;

	/**
	 * Create an order.
	 */
	public function createOrder(
		array<string, mixed> $data
	):Order;

	/**
	 * Updates the order specified by the id.
	 */
	public function updateOrder(
		array<string, mixed> $data, 
		int $orderId
	):Order;

	/**
	 * Delete an order
	 */
	public function deleteOrder(
		int $orderId
	):bool;

	/**
	 * Get a scheduler order
	 */
	public function findSchedulerById(
		int $schedulerId
	):OrderScheduler;

	/**
	 * List orders for a contact id
	 */
	public function allOrdersByContact(
		int $contactId, 
		int $page = 1, 
		int $itemsPerPage = 50, 
		?array<string> $with = []
	):array<Order>;

	/**
	 * Get latest order for a contact id
	 */
	public function getLatestOrderByContactId(
		int $contactId, 
		?array<string> $with = []
	):Order;

	public function searchOrders(
		int $page = 1, 
		int $itemsPerPage = 50, 
		?array<string> $with = []
	):array<Order>;

	/**
	 * Sets the filter array.
	 */
	public function setFilters(
		array<string> $filters = []
	):void;

	/**
	 * Returns the filter array.
	 */
	public function getFilters(
	):mixed;

}