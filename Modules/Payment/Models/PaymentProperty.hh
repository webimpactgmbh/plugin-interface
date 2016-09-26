<?hh
namespace Plenty\Modules\Payment\Models;


/**
 * the payment option
 */
abstract class PaymentProperty 
{
	public int $id;
	public int $paymentId;
	public int $typeId;
	public string $value;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}