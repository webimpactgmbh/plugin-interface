<?hh
namespace Plenty\Modules\StockManagement\Warehouse\Management\Models;

use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\StockManagement\Warehouse\Models\Warehouse;

/**
 * The storage rack model
 */
abstract class Rack 
{
	public int $id;
	public int $name;
	public int $position;
	public int $warehouseId;
	public int $zone;
	public Warehouse $warehouse;
	public Collection $shelves;
	public Collection $storageLocations;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}