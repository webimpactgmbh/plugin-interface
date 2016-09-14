<?hh
namespace Plenty\Modules\Account\OrderSummary\Contracts;

use Illuminate\Database\Eloquent\Collection;
use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Exceptions\ModelNotEditableException;
use Plenty\Modules\Account\OrderSummary\Models\OrderSummary;

/**
 * The contract for the order summary repository
 */
interface OrderSummaryRepositoryContract 
{

	/**
	 * Returns an order summary by an id.
	 */
	public function findOrderSummaryById(
		int $orderSummaryId
	):OrderSummary;

	/**
	 * Updates an existing order summary.
	 */
	public function updateOrderSummary(
		array<mixed> $data, 
		int $orderSummaryId
	):OrderSummary;

	/**
	 * Creates a new order summary.
	 */
	public function createOrderSummary(
		array<mixed> $data
	):OrderSummary;

	/**
	 * Deletes an order summary by an id.
	 */
	public function deleteOrderSummary(
		int $orderSummaryId
	):bool;

	/**
	 * Returns a collection of all order summaries.
	 */
	public function allOrderSummaries(
		array<string> $columns = [], 
		int $perPage = 50
	):Collection;

	/**
	 * Returns an order summary by a contact id.
	 */
	public function findOrderSummaryByContactId(
		int $contactId
	):OrderSummary;

	/**
	 * Returns an order summary by an address id.
	 */
	public function findOrderSummaryByAddressId(
		int $addressId
	):OrderSummary;

}