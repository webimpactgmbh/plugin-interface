<?hh
namespace Plenty\Modules\Character\Contracts;
use Plenty\Modules\Character\Models\CharacterSelection;

/**
 * Repository for CharacterSelection
 */
interface CharacterSelectionRepositoryContract{
	public function findCharacterSelection(
		int $id
	):CharacterSelection;
}