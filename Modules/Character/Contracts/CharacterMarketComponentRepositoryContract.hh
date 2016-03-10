<?hh
namespace Plenty\Modules\Character\Contracts;
use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Character\Models\CharacterMarketComponent;

/**
 * Repository for CharacterMarketComponent
 */
interface CharacterMarketComponentRepositoryContract{
	public function getCharacterMarketComponents(
		float $referrerId,
		?int $componentId = NULL
	):array<CharacterMarketComponent>;
}