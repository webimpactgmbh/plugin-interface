<?hh
namespace Plenty\Modules\Item\Attribute\Models;


/**
 * The AttributeValueLang model including AttributeValue
 */
abstract class AttributeValueLang 
{
	public int $value_id;
	public string $lang;
	public string $name;
	public \Plenty\Modules\Item\Attribute\Models\AttributeValue $attributeValue;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}