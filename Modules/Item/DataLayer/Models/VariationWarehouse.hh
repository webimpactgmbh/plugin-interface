<?hh
namespace Plenty\Modules\Item\DataLayer\Models;
/**
 * VariationWarehouse
 */
abstract class VariationWarehouse{
	public int $variationId;

	public int $warehouseId;

	public int $warehouseZoneId;

	public string $storageLocationType;

	public int $reorderLevel;

	public int $maximumStock;

	public int $stockBuffer;

	public int $stockTurnoverInDays;

	public int $storageLocationId;

	public string $lastUpdateTimestamp;

	public string $createdTimestamp;

}