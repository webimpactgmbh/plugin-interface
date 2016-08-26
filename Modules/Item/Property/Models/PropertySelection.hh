<?hh
namespace Plenty\Modules\Item\Property\Models;


/**
 * The PropertySelection including PropertyItem
 */
abstract class PropertySelection 
{
	public int $propertyItemId;
	public string $lang;
	public string $name;
	public string $description;
	public \Plenty\Modules\Item\Property\Models\PropertyItem $property;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}