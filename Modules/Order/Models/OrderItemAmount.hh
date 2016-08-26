<?hh
namespace Plenty\Modules\Order\Models;


/**
 * The order item amount model. Order item amount refers to amounts of money.
 */
abstract class OrderItemAmount 
{
	public int $id;
	public int $orderItemId;
	public bool $isSystemCurrency;
	public string $currency;
	public float $exchangeRate;
	public float $priceOriginalGross;
	public float $priceOriginalNet;
	public float $priceGross;
	public float $priceNet;
	public float $surcharge;
	public float $discount;
	public bool $isPercentage;
	public string $createdAt;
	public string $updatedAt;
	public \Plenty\Modules\Order\Models\OrderItem $orderItem;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}