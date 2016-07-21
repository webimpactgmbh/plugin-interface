<?hh
namespace Plenty\Modules\Account\Address\Models;

use Plenty\Modules\Order\Models\Order;

/**
 * address order relation model
 */
abstract class AddressOrderRelation 
{
	public int $id;
	public int $orderId;
	public int $typeId;
	public int $addressId;
	public \Plenty\Modules\Account\Address\Models\Address $address;
	public Order $order;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}