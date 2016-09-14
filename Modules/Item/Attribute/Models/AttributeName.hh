<?hh
namespace Plenty\Modules\Item\Attribute\Models;


/**
 * The AttributeName model including Attribute
 */
abstract class AttributeName 
{
	public int $attributeId;
	public string $lang;
	public string $name;
	public \Plenty\Modules\Item\Attribute\Models\Attribute $attribute;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}