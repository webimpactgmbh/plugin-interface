<?hh
namespace Plenty\Modules\StockManagement\Warehouse\Management\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * The storage shelf model
 */
abstract class Shelf 
{
	public int $id;
	public int $rackId;
	public string $name;
	public int $level;
	public \Plenty\Modules\StockManagement\Warehouse\Management\Models\Rack $rack;
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