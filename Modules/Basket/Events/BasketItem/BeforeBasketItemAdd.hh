<?hh
namespace Plenty\Modules\Basket\Events\BasketItem;

use Plenty\Modules\Basket\Models\BasketItem;

/**
 * before basket item add event
 */
abstract class BeforeBasketItemAdd 
{

	abstract public function getBasketItem(
	):BasketItem;

}