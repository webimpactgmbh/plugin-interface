<?hh
namespace Plenty\Modules\StockManagement\Warehouse\Contracts;

use\Contracts;
use Plenty\Modules\StockManagement\Warehouse\Models\Warehouse;
use Illuminate\Support\Collection;

/**
 * The WarehouseRepositoryContract is the interface for the warehouse repository. This interface allows you to either find one warehouse by its Id or all warehouses.
 */
interface WarehouseRepositoryContract 
{

	/**
	 * Find warehouse
	 */
	public function findById(
		int $warehouseId, 
		?array<string> $with = []
	):Warehouse;

	/**
	 * Return all warehouses
	 */
	public function all(
		?array<string> $with = []
	):array<Warehouse>;

}