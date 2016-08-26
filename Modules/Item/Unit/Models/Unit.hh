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
	public string $DecimalPlacesAllowed;
	public string $updatedAt;
	public string $createdAt;
	public array<\Plenty\Modules\Item\Unit\Models\UnitName> $langs;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}