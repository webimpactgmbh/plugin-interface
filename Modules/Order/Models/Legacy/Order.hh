<?hh
namespace Plenty\Modules\Order\Models\Legacy;

use Plenty\Modules\Account\Address\Models\Address;
use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Account\Contact\Models\Contact;
use Plenty\Modules\Account\Address\Models\AddressRelationType;

/**
 * The legacy order model
 */
abstract class Order 
{
	public int $id;
	public string $orderType;
	public int $contactId;
	public float $referrerId;
	public float $status;
	public int $userId;
	public string $entryDate;
	public int $webstoreId;
	public int $warehouseId;
	public string $sellerAccount;
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