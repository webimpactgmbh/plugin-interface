<?hh
namespace Plenty\Modules\Basket\Contracts;

use Plenty\Modules\Basket\Models\Basket;

/**
 * Repository for item basket
 */
interface BasketRepositoryContract 
{

	/**
	 * Load basket from current customer session
	 */
	public function load(
	):Basket;

}