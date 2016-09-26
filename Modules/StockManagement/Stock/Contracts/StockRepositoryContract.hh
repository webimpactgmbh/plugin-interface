<?hh
namespace Plenty\Modules\StockManagement\Stock\Contracts;

use Plenty\Modules\StockManagement\Stock\Models\Stock;
use Plenty\Modules\StockManagement\Stock\Models\StorageLocation;
use Plenty\Repositories\Models\PaginatedResult;

/**
 * Repository Contract for Stock.
 */
interface StockRepositoryContract 
{

	/**
	 * Find Stock by given warehouse id.
	 */
	public function searchByWarehouseId(
		int $warehouseId, 
		array<string> $filter, 
		array<string> $with, 
		int $page, 
		int $itemsPerPage
	):array<Stock>;

	/**
	 * Search stock by filter params.
	 */
	public function search(
		array<string> $filter, 
		array<string> $with, 
		int $page, 
		int $itemsPerPage
	):array<Stock>;

	/**
	 * Find all storage locations by given warehouse id.
	 */
	public function searchStorageLocationsByWarehouseId(
		int $warehouseId, 
		array<string> $filter, 
		array<string> $with, 
		int $page, 
		int $itemsPerPage
	):array<StorageLocation>;

	/**
	 * Search stock by virtual warehouse.
	 */
	public function searchVirtualWarehouse(
		string $name, 
		array<string> $columns, 
		int $page, 
		int $itemsPerPage
	):array<Stock>;

}