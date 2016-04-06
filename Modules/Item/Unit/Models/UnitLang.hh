<?hh
namespace Plenty\Modules\Item\Unit\Models;


/**
 * The unitlang model including the unit
 */
abstract class UnitLang 
{
	public int $plenty_unit_lang_unit_id;
	public string $plenty_unit_lang_lang;
	public string $plenty_unit_lang_name;
	public \Plenty\Modules\Item\Unit\Models\Unit $unit;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}