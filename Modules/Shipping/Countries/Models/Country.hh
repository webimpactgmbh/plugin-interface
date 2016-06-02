<?hh
namespace Plenty\Modules\Shipping\Countries\Models;


/**
 * The country model
 */
abstract class Country 
{
	public int $id;
	public string $name;
	public int $shipping_destination_id;
	public bool $active;
	public int $storehouse_id;
	public string $iso_code_2;
	public string $iso_code_3;
	public string $lang;
	public string $kfz;
	public int $visibility;
	public int $plenty_shipping_country_state_mandatory;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}