<?hh
namespace Plenty\Modules\Account\Models;

use Plenty\Modules\Account\Contact\Models\Contact;

/**
 * account contact relation model
 */
abstract class AccountContactRelation 
{
	public int $id;
	public int $accountId;
	public int $contactId;
	public \Plenty\Modules\Account\Models\Account $account;
	public Contact $contact;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}