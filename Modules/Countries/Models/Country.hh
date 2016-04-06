<?hh
namespace Plenty\Modules\Countries\Models;


/**
 * The country model
 */
abstract class Country 
{
	public int $id;
	public string $name;
	public bool $active;
	public string $iso_code_2;
	public string $iso_code_3;
	public string $lang;
	public string $kfz;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}