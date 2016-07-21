<?hh
namespace Plenty\Modules\Shipping\Countries\Models;


/**
 * The country model
 */
abstract class Country 
{
	public int $id;
	public string $name;
	public int $shippingDestinationId;
	public bool $active;
	public int $storehouseId;
	public string $isoCode2;
	public string $isoCode3;
	public string $lang;
	public string $kfz;
	public int $visibility;
	public int $plentyShippingCountryStateMandatory;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}