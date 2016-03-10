<?hh
namespace Plenty\Modules\Character\Models;
/**
 * The CharacterSelection including CharacterItem
 */
abstract class CharacterSelection{
	public int $character_item_id;

	public string $lang;

	public string $name;

	public string $description;

	public \Plenty\Modules\Character\Models\CharacterItem $character;

}