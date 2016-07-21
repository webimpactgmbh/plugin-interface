<?hh
namespace Plenty\Modules\Account\Contact\Models;


/**
 * contact allowed method of payment model
 */
abstract class ContactAllowedMethodOfPayment 
{
	public int $id;
	public int $contactId;
	public int $methodOfPaymentId;
	public int $allowed;
	public string $createdAt;
	public string $updatedAt;
	public bool $isPaymentActive;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}