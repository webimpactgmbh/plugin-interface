<?hh
namespace Plenty\Modules\Account\Contact\Contracts;

use Illuminate\Database\Eloquent\Collection;
use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Exceptions\ValidationException;
use Plenty\Modules\Account\Contact\Models\ContactType;

/**
 * The contract for the contact type repository.
 */
interface ContactTypeRepositoryContract 
{

	/**
	 * Creates a contact type and returns it.
	 */
	public function createContactType(
		array<mixed> $data
	):ContactType;

	/**
	 * Updates an existing contact type and returns it.
	 */
	public function updateContactType(
		array<mixed> $data, 
		int $contactTypeId
	):ContactType;

	/**
	 * Deletes a contact type by an id. Returns `true` if deletion was successful, otherwise `false`.
	 */
	public function deleteContactType(
		int $contactTypeId
	):bool;

	/**
	 * Returns an existing contact type by an id.
	 */
	public function findContactTypeById(
		int $contactTypeId
	):ContactType;

	/**
	 * Returns a collection of contact types.
	 */
	public function allContactTypes(
		array<string> $columns = []
	):Collection;

}