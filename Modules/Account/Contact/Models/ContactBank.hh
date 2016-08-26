<?hh
namespace Plenty\Modules\Account\Contact\Models;

use Plenty\Modules\Order\Models\Legacy\Order;

/**
 * The contact bank model.
 */
abstract class ContactBank 
{
	public int $id;
	public int $contactId;
	public int $orderId;
	public string $accountOwner;
	public string $bankName;
	public string $bankAddress;
	public string $bankPostalCodeTown;
	public string $bankCountry;
	public string $iban;
	public string $bic;
	public string $accountNumber;
	public string $sortCode;
	public string $lastUpdateBy;
	public int $directDebitMandateAvailable;
	public string $directDebitMandateAt;
	public string $directDebitMethod;
	public string $directDebitType;
	public string $paymentMethod;
	public string $createdAt;
	public string $updatedAt;
	public \Plenty\Modules\Account\Contact\Models\Contact $contact;
	public Order $order;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}