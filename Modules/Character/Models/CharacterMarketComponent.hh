<?hh
namespace Plenty\Modules\Character\Models;
/**
 * The CharacterMarketComponent including CharacterItem
 */
abstract class CharacterMarketComponent{
	public int $character_item_id;

	public int $component_id;

	public float $market_reference;

	public string $external_component;

	public \Plenty\Modules\Character\Models\CharacterItem $character;

}