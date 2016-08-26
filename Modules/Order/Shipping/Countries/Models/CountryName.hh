<?hh
namespace Plenty\Modules\Order\Shipping\Countries\Models;


/**
 * country name
 */
abstract class CountryName 
{
	public int $id;
	public string $language;
	public string $name;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}