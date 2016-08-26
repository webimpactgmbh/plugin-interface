<?hh
namespace Plenty\Modules\Item\Attribute\Models;


/**
 * The AttributeName model including Attribute
 */
abstract class AttributeName 
{
	public int $attribute_id;
	public string $lang;
	public string $name;
	public \Plenty\Modules\Item\Attribute\Models\AttributeName $attributeName;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}