<?hh
namespace Plenty\Modules\Basket\Events\Basket;

use Plenty\Modules\Basket\Models\Basket;

/**
 * After basket created
 */
abstract class AfterBasketCreate 
{

	abstract public function getBasket(
	):Basket;

}