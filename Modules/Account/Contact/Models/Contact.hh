<?hh
namespace Plenty\Modules\Account\Contact\Models;

use Plenty\Modules\Account\Address\Models\Address;
use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Order\Scheduler\Models\OrderScheduler;
use Plenty\Modules\Account\Models\Account;
use Plenty\Modules\Account\OrderSummary\Models\OrderSummary;

/**
 * The contact model.
 */
abstract class Contact 
{
	public int $id;
	public string $externalId;
	public string $number;
	public int $typeId;
	public string $firstName;
	public string $lastName;
	public string $fullName;
	public string $email;
	public string $gender;
	public string $formOfAddress;
	public string $newsletterAllowanceAt;
	public int $classId;
	public int $blocked;
	public int $rating;
	public string $bookAccount;
	public string $lang;
	public float $referrerId;
	public int $webstoreId;
	public int $userId;
	public string $birthdayAt;
	public string $lastLoginAt;
	public string $lastLoginAtTimestamp;
	public string $lastOrderAt;
	public string $createdAt;
	public string $updatedAt;
	public string $privatePhone;
	public string $privateFax;
	public string $privateMobile;
	public string $ebayName;
	public string $paypalEmail;
	public string $paypalPayerId;
	public string $klarnaPersonalId;
	public string $dhlPostIdent;
	public string $forumUsername;
	public string $forumGroupId;
	public string $singleAccess;
	public string $contactPerson;
	public Collection $addresses;
	public Collection $accounts;
	public Collection $orders;
	public Collection $banks;
	public Collection $reorders;
	public Collection $orderSchedulers;
	public Collection $options;
	public Collection $allowedMethodsOfPayment;
	public \Plenty\Modules\Account\Contact\Models\ContactType $type;
	public OrderSummary $orderSummary;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}