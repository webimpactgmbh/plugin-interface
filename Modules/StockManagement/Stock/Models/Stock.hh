<?hh
namespace Plenty\Modules\StockManagement\Stock\Models;


/**
 * The stock model
 */
abstract class Stock 
{
	public int $warehouseId;
	public int $variationId;
	public int $itemId;
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
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}