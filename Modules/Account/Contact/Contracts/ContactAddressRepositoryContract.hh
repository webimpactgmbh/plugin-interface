<?hh
namespace Plenty\Modules\Account\Contact\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Exceptions\ModelNotEditableException;
use Plenty\Modules\Account\Address\Models\Address;

/**
 * The contract for the contact address repository.
 */
interface ContactAddressRepositoryContract 
{

	/**
	 * Returns an address of a given contact for the given type.
	 */
	public function findContactAddressByTypeId(
		int $contactId, 
		int $typeId
	):Address;

	/**
	 * Creates a address, associates it immediately with the given contact (id) with the given type and returns the new address.
	 */
	public function createAddress(
		array<mixed> $data, 
		int $contactId, 
		int $typeId
	):Address;

	/**
	 * Updates the existing address of a the given contact and type and returns it.
	 */
	public function updateAddress(
		array<mixed> $data, 
		int $addressId, 
		int $contactId, 
		int $typeId
	):Address;

	/**
	 * Returns the address of a given contact and type.
	 */
	public function getAddress(
		int $addressId, 
		int $contactId, 
		int $typeId
	):void;

	/**
	 * Adds the address to the given contact as the given type.
	 */
	public function addAddress(
		int $addressId, 
		int $contactId, 
		int $typeId
	):Address;

	/**
	 * Deletes an existing address of a given contact and type. Returns `true` if deletion was successful, otherwise `false`.
	 */
	public function deleteAddress(
		int $addressId, 
		int $contactId, 
		int $typeId
	):bool;

}