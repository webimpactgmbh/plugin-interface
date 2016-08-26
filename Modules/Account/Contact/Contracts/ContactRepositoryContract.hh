<?hh
namespace Plenty\Modules\Account\Contact\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Exceptions\ValidationException;
use Plenty\Modules\Account\Contact\Models\Contact;

/**
 * The contract for the contact repository.
 */
interface ContactRepositoryContract 
{

	/**
	 * Creates a new contact and returns it.
	 */
	public function createContact(
		array<string, mixed> $data
	):Contact;

	/**
	 * Updates an existing contact and returns it.
	 */
	public function updateContact(
		array<string, mixed> $data, 
		int $contactId
	):Contact;

	/**
	 * Deletes a contact by an id.
	 */
	public function deleteContact(
		int $contactId
	):bool;

	/**
	 * Returns an existing contact by an id.
	 */
	public function findContactById(
		int $contactId
	):Contact;

	/**
	 * Returns an existing contact by a contact option information.
	 */
	public function getContactByOptionValue(
		string $value, 
		int $typeId, 
		int $subTypeId
	):Contact;

}