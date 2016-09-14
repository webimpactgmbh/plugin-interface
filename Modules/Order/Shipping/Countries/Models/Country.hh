<?hh
namespace Plenty\Modules\Order\Shipping\Countries\Models;


/**
 * The country model
 */
abstract class Country 
{
	public int $id;
	public string $name;
	public int $shippingDestinationId;
	public int $active;
	public int $storehouseId;
	public string $isoCode2;
	public string $isoCode3;
	public string $lang;
	public bool $isCountryStateMandatory;
	public array<\Plenty\Modules\Order\Shipping\Countries\Models\CountryState> $states;
	public array<\Plenty\Modules\Order\Shipping\Countries\Models\CountryName> $names;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}