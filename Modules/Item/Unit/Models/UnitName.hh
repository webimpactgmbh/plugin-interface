<?hh
namespace Plenty\Modules\Item\Unit\Models;


/**
 * The unitlang model including the unit
 */
abstract class UnitName 
{
	public int $unitId;
	public string $lang;
	public string $name;
	public \Plenty\Modules\Item\Unit\Models\Unit $unit;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}