<?hh
namespace Plenty\Modules\Account\Contact\Contracts;

use Illuminate\Database\Eloquent\Collection;

/**
 * The contract for the contact class repository.
 */
interface ContactClassRepositoryContract 
{

	/**
	 * Get a contact class
	 */
	public function findContactClassById(
		int $contactClassId
	):string;

	/**
	 * Returns a list of contact classes.
	 */
	public function allContactClasses(
	):array<string>;

}