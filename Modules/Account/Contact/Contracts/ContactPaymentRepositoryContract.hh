<?hh
namespace Plenty\Modules\Account\Contact\Contracts;

use Illuminate\Database\Eloquent\Collection;
use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Account\Contact\Models\ContactBank;

/**
 * The contract for the contact payment repository.
 */
interface ContactPaymentRepositoryContract 
{

	/**
	 * Returns a collection of bank accounts of a contact.
	 */
	public function getBanksOfContact(
		int $contactId, 
		array<string> $columns = [], 
		int $perPage = 50
	):Collection;

	/**
	 * Creates a new bank account for a contact and returns it.
	 */
	public function createContactBank(
		array<mixed> $data
	):ContactBank;

	/**
	 * Updates an existing bank account.
	 */
	public function updateContactBank(
		array<mixed> $data, 
		int $contactBankId
	):ContactBank;

	/**
	 * Deletes a bank account. Returns `true` if deletion was successful, otherwise `false`.
	 */
	public function deleteContactBank(
		int $contactBankId
	):bool;

	/**
	 * Returns a bank account by an id.
	 */
	public function findContactBankById(
		int $contactBankId
	):ContactBank;

}