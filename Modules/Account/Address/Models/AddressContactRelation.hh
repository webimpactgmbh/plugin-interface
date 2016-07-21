<?hh
namespace Plenty\Modules\Account\Address\Models;

use Plenty\Modules\Account\Contact\Models\Contact;

/**
 * address contact relation model
 */
abstract class AddressContactRelation 
{
	public int $id;
	public int $contactId;
	public int $typeId;
	public int $addressId;
	public \Plenty\Modules\Account\Address\Models\Address $address;
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