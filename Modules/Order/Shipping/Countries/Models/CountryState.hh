<?hh
namespace Plenty\Modules\Order\Shipping\Countries\Models;


/**
 * country state
 */
abstract class CountryState 
{
	public int $id;
	public int $countryId;
	public string $isoCode;
	public string $name;
	public string $isoCode3166;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}