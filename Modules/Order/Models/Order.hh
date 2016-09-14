<?hh
namespace Plenty\Modules\Order\Models;

use Plenty\Modules\Account\Address\Models\Address;
use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Account\Address\Models\AddressRelationType;
use Plenty\Modules\Order\Models\OrderItem;
use Carbon\Carbon;
use Plenty\Modules\Authentication\Models\User;

/**
 * The order model.
 */
abstract class Order 
{
	public int $id;
	public int $typeId;
	public int $methodOfPaymentId;
	public int $shippingProfileId;
	public string $paymentStatus;
	public int $statusId;
	public int $ownerId;
	public Carbon $createdAt;
	public Carbon $updatedAt;
	public int $plentyId;
	public Address $billingAddress;
	public Address $deliveryAddress;
	public User $owner;
	public Collection $addresses;
	public Collection $orderItems;
	public Collection $properties;
	public Collection $relations;
	public Collection $amounts;
	public Collection $comments;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}