<?hh
namespace Plenty\Modules\Account\Contact\Models;


/**
 * The contact bank model.
 */
abstract class ContactBank 
{
	public int $id;
	public int $contactId;
	public string $accountOwner;
	public string $bankName;
	public string $bankAddress;
	public string $bankPostalCodeTown;
	public string $bankCountry;
	public string $iban;
	public string $bic;
	public string $lastUpdateBy;
	public int $directDebitMandateAvailable;
	public string $directDebitMandateAt;
	public string $directDebitMethod;
	public string $directDebitType;
	public string $paymentMethod;
	public string $createdAt;
	public string $updatedAt;
	public \Plenty\Modules\Account\Contact\Models\Contact $contact;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}