<?hh
namespace Plenty\Modules\Order\Models;

use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Accounting\Vat\Models\Vat;
use Carbon\Carbon;

/**
 * The order item model. Items, shipping costs, coupons, surcharges etc. are all displayed as order items.
 */
abstract class OrderItem 
{
	public int $id;
	public int $orderId;
	public int $typeId;
	public float $referrerId;
	public int $itemVariationId;
	public float $quantity;
	public string $orderItemName;
	public string $attributeValues;
	public int $shippingProfileId;
	public int $countryVatId;
	public int $vatField;
	public float $vatRate;
	public Carbon $createdAt;
	public Carbon $updatedAt;
	public \Plenty\Modules\Order\Models\Order $order;
	public \Plenty\Modules\Order\Models\OrderItemType $type;
	public Vat $countryVat;
	public Collection $amounts;
	public Collection $properties;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}