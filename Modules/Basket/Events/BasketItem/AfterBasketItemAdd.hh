<?hh
namespace Plenty\Modules\Basket\Events\BasketItem;

use Plenty\Modules\Basket\Models\BasketItem;

/**
 * after basket item add event
 */
abstract class AfterBasketItemAdd 
{

	abstract public function getBasketItem(
	):BasketItem;

}