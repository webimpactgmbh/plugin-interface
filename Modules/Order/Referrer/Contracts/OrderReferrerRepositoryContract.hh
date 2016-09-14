<?hh
namespace Plenty\Modules\Order\Referrer\Contracts;

use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Order\Referrer\Models\OrderReferrer;

/**
 * Provides methods for the processing of order referrer
 */
interface OrderReferrerRepositoryContract 
{

	/**
	 * Get the list of order referrer.
	 */
	public function getList(
		?array<string> $columns = []
	):array<OrderReferrer>;

	/**
	 * Get order referrer by id
	 */
	public function createReferrer(
		array<mixed> $data
	):OrderReferrer;

	/**
	 * Get order referrer by id
	 */
	public function getReferrerById(
		float $referrerId
	):OrderReferrer;

}