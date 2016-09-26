<?hh
namespace Plenty\Modules\StockManagement\Warehouse\Management\Models;

use Plenty\Modules\StockManagement\Warehouse\Models\Warehouse;

/**
 * The storage location model
 */
abstract class StorageLocation 
{
	public int $id;
	public int $warehouseId;
	public int $rackId;
	public int $shelfId;
	public string $name;
	public int $type;
	public int $position;
	public Warehouse $warehouse;
	public \Plenty\Modules\StockManagement\Warehouse\Management\Models\Rack $rack;
	public \Plenty\Modules\StockManagement\Warehouse\Management\Models\Shelf $shelf;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}