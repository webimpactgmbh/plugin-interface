<?hh
namespace Plenty\Modules\Item\Character\Models;


/**
 * The CharacterSelection including CharacterItem
 */
abstract class CharacterSelection 
{
	public int $character_item_id;
	public string $lang;
	public string $name;
	public string $description;
	public \Plenty\Modules\Item\Character\Models\CharacterItem $character;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}