<?hh
namespace Plenty\Modules\Account\Models;

use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Account\Contact\Models\Contact;

/**
 * the account model.
 */
abstract class Account 
{
	public int $id;
	public string $number;
	public string $companyName;
	public string $taxIdNumber;
	public int $valuta;
	public int $discountDays;
	public float $discountPercent;
	public int $timeForPaymentAllowedDays;
	public int $salesRepresentativeContactId;
	public int $userId;
	public string $createdAt;
	public string $updatedAt;
	public Collection $contacts;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}