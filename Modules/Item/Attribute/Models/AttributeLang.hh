<?hh
namespace Plenty\Modules\Item\Attribute\Models;
/**
 * The AttributeLang model including Attribute
 */
abstract class AttributeLang{
	public int $attribute_id;

	public string $lang;

	public string $name;

	public \Plenty\Modules\Item\Attribute\Models\AttributeLang $attributeLang;

}