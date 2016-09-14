<?hh
namespace Plenty\Modules\StockManagement\Stock\Models;


/**
 * The storage location model. A storage location is the smallest unit of a warehouse. The storage location is the place where variations are actually stored.
 */
abstract class StorageLocation 
{
	public int $itemId;
	public int $variationId;
	public int $warehouseId;
	public mixed $storageLocation;
	public mixed $attributeValueSet;
	public mixed $quantity;
	public mixed $reserved;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}