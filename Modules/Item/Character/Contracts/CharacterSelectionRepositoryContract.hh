<?hh
namespace Plenty\Modules\Item\Character\Contracts;

use Plenty\Modules\Item\Character\Models\CharacterSelection;

/**
 * Repository for CharacterSelection
 */
interface CharacterSelectionRepositoryContract 
{

	public function findCharacterSelection(
		int $id
	):CharacterSelection;

}