<?hh
namespace Plenty\Modules\Payment\History\Models;


/**
 * the payment history
 */
abstract class PaymentHistory 
{
	public int $Id;
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