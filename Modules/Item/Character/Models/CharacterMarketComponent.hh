<?hh
namespace Plenty\Modules\Item\Character\Models;


/**
 * The CharacterMarketComponent including CharacterItem
 */
abstract class CharacterMarketComponent 
{
	public int $character_item_id;
	public int $component_id;
	public float $market_reference;
	public string $external_component;
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