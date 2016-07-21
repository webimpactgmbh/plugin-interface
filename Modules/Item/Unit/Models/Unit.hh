<?hh
namespace Plenty\Modules\Item\Unit\Models;


/**
 * The unit model including unitlang
 */
abstract class Unit 
{
	public int $id;
	public int $position;
	public string $unitOfMeasurement;
	public string $areDecimalPlacesAllowed;
	public string $updatedAt;
	public string $createdAt;
	public array<\Plenty\Modules\Item\Unit\Models\UnitLang> $unitLanguages;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}