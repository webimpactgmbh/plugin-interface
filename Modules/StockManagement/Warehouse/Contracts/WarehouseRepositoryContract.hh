<?hh
namespace Plenty\Modules\StockManagement\Warehouse\Contracts;

use\Contracts;
use Plenty\Modules\StockManagement\Warehouse\Models\Warehouse;
use Illuminate\Support\Collection;

/**
 * The WarehouseRepositoryContract is the interface for the warehouse repository. This interface allows you to either get one warehouse by specifying the id or to list all warehouses.
 */
interface WarehouseRepositoryContract 
{

	/**
	 * Get a warehouse
	 */
	public function findById(
		int $warehouseId, 
		?array<string> $with = []
	):Warehouse;

	/**
	 * List warehouses
	 */
	public function all(
		?array<string> $with = []
	):array<Warehouse>;

}