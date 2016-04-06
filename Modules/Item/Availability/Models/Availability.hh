<?hh
namespace Plenty\Modules\Item\Availability\Models;


/**
 * The item availability model
 */
abstract class Availability 
{
	public string $name;
	public int $id;
	public string $icon;
	public int $averageDays;
	public array<\Plenty\Modules\Item\Availability\Models\AvailabilityLang> $langs;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}