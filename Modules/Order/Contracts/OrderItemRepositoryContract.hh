<?hh
namespace Plenty\Modules\Order\Contracts;

use Plenty\Modules\Order\Models\OrderItem;
use Illuminate\Database\Eloquent\ModelNotFoundException;

/**
 * The OrderItemRepositoryContract is the interface for the order item repository. This interface allows you to find, create and update order items. An order item can be e.g. items, surcharges and coupons. Each order item is given a unique id, which links it to a specific order.
 */
interface OrderItemRepositoryContract 
{

	/**
	 * Finds the order item specified by the id. The data that is returned depends on the order item type.
	 */
	public function findOrderItemById(
		int $orderItemId
	):OrderItem;

	/**
	 * Adds an order item to the order spedified by the order id.
	 */
	public function createOrderItem(
		array<string, mixed> $data, 
		int $orderId
	):OrderItem;

	/**
	 * Updates the order item specified by the id.
	 */
	public function updateOrderItem(
		array<string, mixed> $data, 
		int $orderItemId
	):OrderItem;

	/**
	 * Deletes the order item specified by the id.
	 */
	public function deleteOrderItem(
		int $orderItemId
	):bool;

}