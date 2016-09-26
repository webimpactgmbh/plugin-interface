<?hh
namespace Plenty\Modules\StockManagement\Stock\Models;

use Carbon\Carbon;

/**
 * The stock model.
 */
abstract class Stock 
{
	public int $warehouseId;
	public int $variationId;
	public int $itemId;
	public float $stockPhysical;
	public float $reservedStock;
	public float $reservedEbay;
	public float $reorderDelta;
	public float $stockNet;
	public int $reordered;
	public float $reservedBundle;
	public float $averagePurchasePrice;
	public Carbon $lastUpdateTimestamp;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}