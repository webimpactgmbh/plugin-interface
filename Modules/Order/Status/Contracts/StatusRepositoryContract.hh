<?hh
namespace Plenty\Modules\Order\Status\Contracts;

use Plenty\Modules\Order\Status\Models\OrderStatus;
use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Exceptions\ValidationException;
use Plenty\Modules\Order\Status\Models\OrderStatusName;
use Plenty\Repositories\Models\PaginatedResult;

/**
 * The StatusRepositoryContract is the interface for the status repository. This interface allows you to find, create and update status.
 */
interface StatusRepositoryContract 
{

	/**
	 * Finds the status specified by the id.
	 */
	public function findStatusById(
		float $statusId, 
		?array<string> $with = []
	):OrderStatus;

	/**
	 * Find an existing status name by given id and lang
	 */
	public function findStatusNameById(
		float $statusId, 
		float $lang
	):OrderStatusName;

	/**
	 * Get all status
	 */
	public function searchStatus(
		int $page = 1, 
		int $itemsPerPage = 50, 
		?array<string> $with = []
	):array<OrderStatus>;

}