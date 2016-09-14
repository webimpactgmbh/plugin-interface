<?hh
namespace Plenty\Modules\Item\Manufacturer\Contracts;

use Plenty\Modules\Item\Manufacturer\Models\Manufacturer;
use Plenty\Repositories\Models\PaginatedResult;

/**
 * Repository for item manufacturers
 */
interface ManufacturerRepositoryContract 
{

	/**
	 * store a new manufacturer
	 */
	public function create(
		array<string, mixed> $data
	):Manufacturer;

	/**
	 * Update an existing manufacturer
	 */
	public function update(
		array<string, mixed> $data, 
		int $manufacturerId
	):Manufacturer;

	/**
	 * Delete a manufacturer by the manufacturer id
	 */
	public function delete(
		int $manufacturerId
	):void;

	/**
	 * Search manufacturers by Filter
	 */
	public function search(
		?array<string, string> $params = [], 
		array<string> $columns = []
	):PaginatedResult;

	/**
	 * Find an existing Manufacturer
	 */
	public function findById(
		int $manufacturerId
	):Manufacturer;

	public function all(
		array<string> $columns = []
	):mixed;

}