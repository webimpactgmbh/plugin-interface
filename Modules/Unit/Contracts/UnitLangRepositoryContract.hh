<?hh
namespace Plenty\Modules\Unit\Contracts;
use Plenty\Modules\Unit\Models\UnitLang;

/**
 * Repository for Unit
 */
interface UnitLangRepositoryContract{
	public function findUnit(
		int $unitId,
		?string $lang = "de"
	):?UnitLang;
	public function all(
		?string $lang = "de"
	):?array<UnitLang>;
}