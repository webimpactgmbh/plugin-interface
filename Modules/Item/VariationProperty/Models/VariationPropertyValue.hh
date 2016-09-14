<?hh
namespace Plenty\Modules\Item\VariationProperty\Models;

use Plenty\Modules\Item\Property\Models\PropertyItem;
use Plenty\Modules\Item\Property\Models\PropertySelection;

/**
 * The VariationPropertyValue
 */
abstract class VariationPropertyValue 
{
	public int $id;
	public int $variationId;
	public int $propertyItemId;
	public int $propertySelectionId;
	public int $valueInt;
	public float $valueFloat;
	public string $valueFile;
	public float $surcharge;
	public PropertyItem $propertyItem;
	public PropertySelection $propertySelection;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}