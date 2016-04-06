<?hh
namespace Plenty\Modules\Item\Unit\Contracts;

use Plenty\Modules\Item\Unit\Models\UnitLang;

/**
 * Repository for Unit
 */
interface UnitLangRepositoryContract 
{

	public function findUnit(
		int $unitId, 
		?string $lang = "de"
	):?UnitLang;

	public function all(
		?string $lang = "de"
	):?array<UnitLang>;

}