<?hh
namespace Plenty\Modules\Account\Contact\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Repositories\Criteria\Contracts\CriteriableContract;
use Plenty\Exceptions\ValidationException;
use Plenty\Modules\Account\Contact\Models\Contact;
use Plenty\Repositories\Contracts\FilterableContract;
use Plenty\Repositories\Contracts\SortableContract;

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

	/**
	 * Pushes a sorting order to a collection.
	 */
	public function pushSortingOrder(
		string $field, 
		string $direction = "asc"
	):SortableContract;

	/**
	 * Applies the sorting order on the underlying builder instance
	 */
	public function applySortingOrder(
	):SortableContract;

	/**
	 * Clears the sorting order on the underlying builder instance
	 */
	public function clearSortingOrder(
	):SortableContract;

	/**
	 * Sets the filter array.
	 */
	public function setFilters(
		array<string> $filters = []
	):void;

	/**
	 * Returns the filter array.
	 */
	public function getFilters(
	):mixed;

}