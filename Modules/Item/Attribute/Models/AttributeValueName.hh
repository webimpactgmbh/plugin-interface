<?hh
namespace Plenty\Modules\Item\Attribute\Models;


/**
 * The AttributeValueName model including AttributeValue
 */
abstract class AttributeValueName 
{
	public int $valueId;
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