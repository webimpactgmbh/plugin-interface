<?hh
namespace Plenty\Modules\Order\Referrer\Contracts;

use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Order\Referrer\Models\OrderReferrer;

/**
 * Provides methods for processing order referrers. An order referrer indicates where a purchase was made originally.
 */
interface OrderReferrerRepositoryContract 
{

	/**
	 * List order referrers
	 */
	public function getList(
		?array<string> $columns = []
	):array<OrderReferrer>;

	/**
	 * Create order referrer
	 */
	public function createReferrer(
		array<mixed> $data
	):OrderReferrer;

	/**
	 * Get order referrer
	 */
	public function getReferrerById(
		float $referrerId
	):OrderReferrer;

}