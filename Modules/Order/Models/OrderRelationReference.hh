<?hh
namespace Plenty\Modules\Order\Models;

use Plenty\Modules\Account\Contact\Models\Contact;
use Plenty\Modules\Account\Models\Account;

/**
 * The order relation reference model specifies how references and orders are related to one another.
 */
abstract class OrderRelationReference 
{
	public int $id;
	public int $orderId;
	public string $referenceType;
	public int $referenceId;
	public string $relation;
	public \Plenty\Modules\Order\Models\Order $order;
	public ?Contact $contactReceiver;
	public ?Contact $contactSender;
	public ?Account $accountReceiver;
	public ?Account $accountSender;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}