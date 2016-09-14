<?hh
namespace Plenty\Modules\Item\VariationProperty\Models;

use Plenty\Modules\Item\Property\Models\PropertyItem;

/**
 * The VariationPropertyValue
 */
abstract class VariationProperty 
{
	public int $variationId;
	public int $propertyItemId;
	public PropertyItem $propertyItem;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}