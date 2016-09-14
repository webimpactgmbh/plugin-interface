<?hh
namespace Plenty\Modules\Item\Manufacturer\Models;


/**
 * The item manufacturer model
 */
abstract class Manufacturer 
{
	public string $name;
	public int $id;
	public string $logo;
	public string $url;
	public int $pixmaniaBrandId;
	public int $neckermannBrandId;
	public string $externalName;
	public int $neckermannAtEpBrandId;
	public int $neckermannAtCdBrandId;
	public string $street;
	public string $houseNo;
	public string $postcode;
	public string $town;
	public int $countryId;
	public string $phoneNumber;
	public string $faxNumber;
	public string $email;
	public int $laRedouteBrandId;
	public string $manufacturerComment;
	public string $lastUpdateTimestamp;
	public array<\Plenty\Modules\Item\Manufacturer\Models\ManufacturerCommission> $commissions;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}