<?hh
namespace Plenty\Modules\Account\Contact\Contracts;

use Illuminate\Database\Eloquent\Collection;
use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Exceptions\ValidationException;
use Plenty\Modules\Account\Contact\Models\ContactOption;

/**
 * The contract for the contact option repository.
 */
interface ContactOptionRepositoryContract 
{

	/**
	 * Returns all options of the contact.
	 */
	public function findContactOptions(
		int $contactId, 
		int $typeId = 0, 
		int $subTypeId = 0
	):Collection;

	/**
	 * Creates an option for the given contact and returns them.
	 */
	public function createContactOptions(
		array<mixed> $optionData, 
		int $contactId
	):Collection;

	/**
	 * Updates options of the given contact and returns them.
	 */
	public function updateContactOptions(
		array<mixed> $optionData, 
		int $contactId
	):Collection;

	/**
	 * Deletes all options of the given contact. Returns `true` if deletion was successful, otherwise `false`.
	 */
	public function deleteContactOptionsByContactId(
		int $contactId
	):bool;

	/**
	 * Returns an option by an id.
	 */
	public function findContactOption(
		int $optionId
	):?ContactOption;

	/**
	 * Updates an option with the given id and returns it.
	 */
	public function updateContactOption(
		array<string> $optionData, 
		int $optionId
	):ContactOption;

	/**
	 * Deletes the option with the given id.
	 */
	public function deleteContactOption(
		int $optionId
	):bool;

}