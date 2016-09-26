<?hh
namespace Plenty\Modules\Payment\Method\Models;


/**
 * PaymentMethod
 */
abstract class PaymentMethod 
{
	public int $id;
	public string $pluginKey;
	public string $paymentKey;
	public string $name;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}