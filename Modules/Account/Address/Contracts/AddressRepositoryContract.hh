<?hh
namespace Plenty\Modules\Account\Address\Contracts;

use Illuminate\Database\Eloquent\Collection;
use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Exceptions\ModelNotEditableException;
use Plenty\Modules\Account\Address\Models\Address;
use Plenty\Modules\Account\Address\Models\AddressOption;

/**
 * The contract for the address repository
 */
interface AddressRepositoryContract 
{

	/**
	 * Returns an address by an id.
	 */
	public function findAddressById(
		int $addressId
	):Address;

	/**
	 * Updates an existing address.
	 */
	public function updateAddress(
		array<string, mixed> $data, 
		int $addressId
	):Address;

	/**
	 * Creates a new address.
	 */
	public function createAddress(
		array<string, mixed> $data
	):Address;

	/**
	 * Deletes an address by an id.
	 */
	public function deleteAddress(
		int $addressId
	):bool;

	/**
	 * Returns a Collection of addresses associated with a warehouse.
	 */
	public function getAddressesOfWarehouse(
		int $warehouseId, 
		?int $relationTypeId = null, 
		array<string> $columns = [], 
		int $perPage = 50
	):Collection;

	/**
	 * Creates a new address and immediately associates it with a warehouse.
	 */
	public function createAddressOfWarehouse(
		array<string, mixed> $data
	):Address;

	/**
	 * Returns a Collection of address options of an address.
	 */
	public function findAddressOptions(
		int $addressId, 
		?int $typeId = 0
	):Collection;

	/**
	 * Creates new address options for an existing address and returns all options of the address.
	 */
	public function createAddressOptions(
		array<string, mixed> $addressData, 
		int $addressId
	):Collection;

	/**
	 * Updates address options for an existing address and returns all options of the address.
	 */
	public function updateAddressOptions(
		array<string, mixed> $addressData, 
		int $addressId
	):Collection;

	/**
	 * Deletes all address options of an address.
	 */
	public function deleteAddressOptions(
		int $addressId
	):void;

	/**
	 * Returns an address option by an id.
	 */
	public function getAddressOption(
		int $optionId
	):AddressOption;

	/**
	 * Updates a single address option.
	 */
	public function updateAddressOption(
		array<string, mixed> $optionData, 
		int $optionId
	):AddressOption;

	/**
	 * Deletes an address option. Returns `true` if deletion ws successfull or `false` otherwise
	 */
	public function deleteAddressOption(
		int $optionId
	):bool;

	/**
	 * Returns a collection of address relation types by a specific application and language. The collection may be empty.
	 */
	public function findAddressRelationTypes(
		string $application, 
		string $lang
	):Collection;

}