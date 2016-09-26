<?hh
namespace Plenty\Modules\Account\Contact\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Exceptions\ModelWithUniqueFieldException;
use Plenty\Modules\Account\Models\Account;

/**
 * The contract for the contact account repository.
 */
interface ContactAccountRepositoryContract 
{

	/**
	 * Returns an account by an id only if it is associated with the given contact id.
	 */
	public function findAccount(
		int $accountId, 
		int $contactId
	):?Account;

	/**
	 * Creates new account and associates it immediately with the given id of the contact.
	 */
	public function createAccount(
		array<string, mixed> $data, 
		int $contactId
	):Account;

	/**
	 * Updates an existing account. If not already associated, it will associate the account with the given contact id.
	 */
	public function updateAccount(
		array<string, mixed> $data, 
		int $accountId, 
		int $contactId
	):Account;

	/**
	 * Deletes the given account from the given contact id. Returns `true` if the deletion was successful, otherwise `false`.
	 */
	public function deleteAccount(
		int $accountId, 
		int $contactId
	):bool;

}