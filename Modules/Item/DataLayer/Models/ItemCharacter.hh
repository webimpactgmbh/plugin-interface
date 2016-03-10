<?hh
namespace Plenty\Modules\Item\DataLayer\Models;
/**
 * ItemCharacter
 */
abstract class ItemCharacter{
	public int $itemCharacterId;

	public int $characterId;

	public mixed $characterValue;

	public string $characterValueType;

	public bool $isOrderCharacter;

	public float $characterOrderMarkup;

}