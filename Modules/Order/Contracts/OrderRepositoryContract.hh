<?hh
namespace Plenty\Modules\Order\Contracts;

use Plenty\Modules\Order\Models\Order;
use Illuminate\Database\Eloquent\ModelNotFoundException;
use Illuminate\Support\Collection;
use Plenty\Exceptions\ValidationException;
use Plenty\Modules\Order\Scheduler\Models\OrderScheduler;
use Plenty\Repositories\Models\PaginatedResult;

/**
 * The OrderRepositoryContract is the interface for the order repository. This interface allows you to find, create and update orders. There are many different order types and the data returned depends on the order type.
 */
interface OrderRepositoryContract 
{

	/**
	 * Finds the order specified by the id.
	 */
	public function findOrderById(
		int $orderId, 
		?array<string> $with = []
	):Order;

	/**
	 * Creates an order.
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
	 * Deletes the order specified by the id.
	 */
	public function deleteOrder(
		int $orderId
	):bool;

	/**
	 * Finds the scheduler order specified by the id.
	 */
	public function findSchedulerById(
		int $schedulerId
	):OrderScheduler;

	/**
	 * Get all orders
	 */
	public function allOrdersForPos(
		array<string> $columns = [], 
		array<string> $where = [], 
		int $page = 1, 
		int $perPage = 50
	):array<Order>;

	/**
	 * Gets all orders for the specified contact ID.
	 */
	public function allOrdersByContact(
		int $contactId, 
		int $page = 1, 
		int $itemsPerPage = 50, 
		?array<string> $with = []
	):array<Order>;

	/**
	 * Returns the latest order for a specified contact id.
	 */
	public function getLatestOrderByContactId(
		int $contactId, 
		?array<string> $with = []
	):Order;

	public function searchOrders(
		?array<string> $filter, 
		int $page = 1, 
		int $itemsPerPage = 50, 
		?array<string> $with = []
	):array<Order>;

}