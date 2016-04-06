<?hh
namespace Plenty\Modules\Item\Unit\Models;


/**
 * The unit model including unitlang
 */
abstract class Unit 
{
	public int $plenty_unit_id;
	public int $plenty_unit_position;
	public string $plenty_unit_unit_of_measurement;
	public string $plenty_unit_decimal_places_allowed;
	public string $plenty_unit_update_timestamp;
	public string $plenty_unit_created_timestamp;
	public array<\Plenty\Modules\Item\Unit\Models\UnitLang> $langs;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}