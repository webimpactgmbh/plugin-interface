<?hh
namespace Plenty\Modules\Basket\Contracts;

use Plenty\Modules\Basket\Models\BasketItem;

/**
 * Repository for basket items
 */
interface BasketItemRepositoryContract 
{

	/**
	 * Find an existing basket item in current customer session by id
	 */
	public function findOneById(
		int $basketRowId
	):?BasketItem;

	public function findExistingOneByData(
		array<string, mixed> $data
	):?BasketItem;

	/**
	 * Search basket items by current customer session
	 */
	public function all(
	):array<BasketItem>;

	public function addBasketItem(
		array<string, mixed> $data
	):BasketItem;

	public function updateBasketItem(
		int $basketItemId, 
		array<string, mixed> $data
	):void;

	public function removeBasketItem(
		int $basketItemId
	):void;

}