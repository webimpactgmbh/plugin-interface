<?hh
namespace Plenty\Modules\Item\Property\Models;


/**
 * The PropertyItemName including PropertyItem
 */
abstract class PropertyItemName 
{
	public int $character_item_id;
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