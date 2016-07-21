<?hh
namespace Plenty\Modules\Account\Address\Models;

use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Shipping\Countries\Models\Country;

/**
 * The address model
 */
abstract class Address 
{
	public int $id;
	public string $name1;
	public string $name2;
	public string $name3;
	public string $name4;
	public string $companyName;
	public string $firstName;
	public string $lastName;
	public string $careOf;
	public string $address1;
	public string $address2;
	public string $address3;
	public string $address4;
	public string $street;
	public string $houseNumber;
	public string $additional;
	public string $postalCode;
	public string $town;
	public int $countryId;
	public int $stateId;
	public bool $readOnly;
	public string $checkedAt;
	public string $createdAt;
	public string $updatedAt;
	public string $taxIdNumber;
	public string $externalId;
	public bool $entryCertificate;
	public string $phone;
	public string $email;
	public string $postident;
	public string $fsk;
	public string $personalNumber;
	public string $packstationNo;
	public bool $isPackstation;
	public bool $isPostfiliale;
	public Collection $options;
	public Collection $contacts;
	public Collection $orders;
	public Country $country;
	public Collection $contactRelations;
	public Collection $orderRelations;
	public Collection $warehouseRelations;
	public Collection $reorderRelations;
	public Collection $schedulerRelations;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}