<?hh
namespace Plenty\Modules\Order\Shipping\DefaultShipping\Models;


/**
 * The Default Shipping model
 */
abstract class DefaultShipping 
{
	public int $id;
	public float $referrerId;
	public int $shippingDestinationId;
	public int $position;
	public int $paymentMethod1;
	public int $paymentMethod2;
	public int $paymentMethod3;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}