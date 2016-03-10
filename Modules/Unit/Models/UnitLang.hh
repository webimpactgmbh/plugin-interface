<?hh
namespace Plenty\Modules\Unit\Models;
/**
 * The unitlang model including the unit
 */
abstract class UnitLang{
	public int $plenty_unit_lang_unit_id;

	public string $plenty_unit_lang_lang;

	public string $plenty_unit_lang_name;

	public \Plenty\Modules\Unit\Models\Unit $unit;

}