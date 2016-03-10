<?hh
namespace Plenty\Modules\Character\Models;
/**
 * The CharacterItemName including CharacterItem
 */
abstract class CharacterItemName{
	public int $character_item_id;

	public string $lang;

	public string $name;

	public string $description;

	public \Plenty\Modules\Character\Models\CharacterItem $character;

}