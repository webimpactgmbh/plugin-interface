<?hh
namespace Plenty\Modules\Basket\Contracts;
use Plenty\Modules\Basket\Models\BasketItem;

/**
 * Repository for basket items
 */
interface BasketItemRepositoryContract{
	/**
	 * Find an existing BasketItem
	 */
	public function findById(
		int $basketRowId
	):?BasketItem;
	/**
	 * Search basket items by session
	 */
	public function findBySession(
	):array<BasketItem>;
}