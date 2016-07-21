<?hh
namespace Plenty\Modules\Account\OrderSummary\Models;

use Plenty\Modules\Account\Address\Models\Address;
use Plenty\Modules\Account\Contact\Models\Contact;
use Plenty\Modules\Order\Models\Order;

/**
 * The order summary model.
 */
abstract class OrderSummary 
{
	public int $id;
	public int $addressId;
	public int $contactId;
	public int $unpaidOrdersCount;
	public float $unpaidOrderTotalAmount;
	public int $orderCount;
	public string $createdAt;
	public string $updatedAt;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}