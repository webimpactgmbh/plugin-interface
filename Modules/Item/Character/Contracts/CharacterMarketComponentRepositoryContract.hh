<?hh
namespace Plenty\Modules\Item\Character\Contracts;

use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Item\Character\Models\CharacterMarketComponent;

/**
 * Repository for CharacterMarketComponent
 */
interface CharacterMarketComponentRepositoryContract 
{

	public function getCharacterMarketComponents(
		float $referrerId, 
		?int $componentId = null
	):array<CharacterMarketComponent>;

}