<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationAttributeValue
 */
abstract class VariationAttributeValue 
{
	public int $attributeId;
	public int $attributeValueId;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}