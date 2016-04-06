<?hh
namespace Plenty\Modules\Item\Availability\Models;


/**
 * The item availability lang model
 */
abstract class AvailabilityLang 
{
	public int $availabilityId;
	public string $lang;
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