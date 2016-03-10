<?hh
namespace Plenty\Modules\Item\DataLayer\Models;
/**
 * VariationStock
 */
abstract class VariationStock{
	public int $warehouseId;

	public mixed $stockPhysical;

	public mixed $reservedStock;

	public mixed $reservedEbay;

	public mixed $reorderDelta;

	public int $stockNet;

	public mixed $updateAmazon;

	public mixed $updatePixmania;

	public mixed $warehouseType;

	public mixed $reordered;

	public mixed $reservedBundle;

	public mixed $averagePurchasePrice;

	public mixed $warehousePriority;

	public string $lastUpdateTimestamp;

	public mixed $lastCalculateTimestamp;

	public mixed $reservedOutOfStock;

	public mixed $reservedBasket;

}