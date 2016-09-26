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
	):array<ContactBank>;

	/**
	 * Returns bank details of an order.
	 */
	public function getBankByOrderId(
		int $orderId, 
		array<string> $columns = []
	):ContactBank;

	/**
	 * Creates a new bank account for a contact and returns it.
	 */
	public function createContactBank(
		array<string, mixed> $data
	):ContactBank;

	/**
	 * Updates an existing bank account.
	 */
	public function updateContactBank(
		array<string, mixed> $data, 
		int $contactBankId
	):ContactBank;

	/**
	 * Deletes a bank account. Returns `true` if deletion was successful. Returns `false` if deletion was not successful.
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