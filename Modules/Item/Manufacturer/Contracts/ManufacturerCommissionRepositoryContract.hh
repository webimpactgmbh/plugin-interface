<?hh
namespace Plenty\Modules\Item\Manufacturer\Contracts;

use Plenty\Modules\Item\Manufacturer\Models\ManufacturerCommission;
use Plenty\Repositories\Models\DeleteResponse;

/**
 * Repository for ManufacturerCommission
 */
interface ManufacturerCommissionRepositoryContract 
{

	/**
	 * Find one ManufacturerCommission by given Id
	 */
	public function find(
		int $id
	):ManufacturerCommission;

	/**
	 * Creates new ManufacturerCommission
	 */
	public function create(
		array<string> $data
	):ManufacturerCommission;

	/**
	 * Updates existing ManufacturerCommission
	 */
	public function update(
		array<string> $data, 
		int $id
	):ManufacturerCommission;

	/**
	 * Delete an ManufacturerCommission by givenId
	 */
	public function delete(
		int $id
	):DeleteResponse;

	/**
	 * Find ManufacturerCommissions by given ManufacturerId
	 */
	public function findByManufacturerId(
		int $manufacturerId
	):array<ManufacturerCommission>;

}