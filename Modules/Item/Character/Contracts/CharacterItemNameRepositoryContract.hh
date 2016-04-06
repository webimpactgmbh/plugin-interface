<?hh
namespace Plenty\Modules\Item\Character\Contracts;

use Plenty\Modules\Item\Character\Models\CharacterItemName;

/**
 * Repository for Character
 */
interface CharacterItemNameRepositoryContract 
{

	public function findCharacterItem(
		int $characterItemId, 
		?string $lang = "de"
	):?CharacterItemName;

	public function all(
		?string $lang = "de"
	):?array<CharacterItemName>;

}