<?hh
namespace Plenty\Modules\Account\Contracts;

use Illuminate\Database\Eloquent\Collection;
use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Account\Models\Account;

/**
 * The Repository for accounts and relations between accounts and contacts.
 */
interface AccountRepositoryContract 
{

	/**
	 * Creates a new account and returns it.
	 */
	public function createAccount(
		array<mixed> $data
	):Account;

	/**
	 * Updates an existing account and returns it.
	 */
	public function updateAccount(
		array<mixed> $data, 
		int $accountId
	):Account;

	/**
	 * Deletes an account by an id. Returns `true` if deletion was successful, otherwise `false`.
	 */
	public function deleteAccount(
		int $accountId
	):bool;

	/**
	 * Returns an account by an id.
	 */
	public function findAccountById(
		int $accountId
	):Account;

	/**
	 * Returns a collection of all accounts.
	 */
	public function allAccounts(
		array<string> $columns = [], 
		int $perPage = 50
	):Collection;

	/**
	 * Returns a collection of contacts which belong to the account.
	 */
	public function getContactsOfAccount(
		int $accountId
	):Collection;

	/**
	 * Creates a new or updates an existing account.
	 */
	public function saveAccount(
		array<string, mixed> $data = []
	):mixed;

}