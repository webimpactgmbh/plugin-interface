<?hh
namespace Plenty\Modules\Order\Scheduler\Models;

use Plenty\Modules\Account\Address\Models\Address;
use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Account\Contact\Models\Contact;
use Plenty\Modules\Account\Address\Models\AddressRelationType;

/**
 * The legacy order model
 */
abstract class OrderScheduler 
{
	public int $id;
	public int $contactId;
	public Address $deliveryAddress;
	public Address $billingAddress;
	public Collection $addresses;
	public Collection $addressRelations;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}