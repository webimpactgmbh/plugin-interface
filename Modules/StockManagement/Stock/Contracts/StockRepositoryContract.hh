<?hh
namespace Plenty\Modules\StockManagement\Stock\Contracts;

use Plenty\Modules\StockManagement\Stock\Models\Stock;
use Plenty\Modules\StockManagement\Stock\Models\StorageLocation;

/**
 * Repository Contract for Stock
 */
interface StockRepositoryContract 
{

	/**
	 * Find Stock by given warehouse id
	 */
	public function searchByWarehouseId(
		int $warehouseId, 
		array<string> $filter, 
		array<string> $with, 
		array<string> $params
	):array<Stock>;

	/**
	 * Search stock by filter params
	 */
	public function search(
		array<string> $filter, 
		array<string> $with, 
		array<string> $params
	):array<Stock>;

	/**
	 * Find all storage locations by given warehouse id
	 */
	public function searchStorageLocationsByWarehouseId(
		int $warehouseId, 
		array<string> $filter, 
		array<string> $with, 
		array<string> $params
	):array<StorageLocation>;

}