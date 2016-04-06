<?hh
namespace Plenty\Modules\Basket\Contracts;

use Plenty\Modules\Basket\Models\Basket;

/**
 * Repository for item basket
 */
interface BasketRepositoryContract 
{

	/**
	 * Search basket by session
	 */
	public function findBySession(
	):Basket;

}