<?hh
namespace Plenty\Modules\Payment\Models;


/**
 * payment order relation model
 */
abstract class PaymentOrderRelation 
{
	public int $id;
	public int $paymentId;
	public int $orderId;
	public string $assignDate;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}