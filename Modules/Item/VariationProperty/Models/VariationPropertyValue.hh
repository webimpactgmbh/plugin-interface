<?hh
namespace Plenty\Modules\Item\VariationProperty\Models;

use Plenty\Modules\Item\Property\Models\PropertySelection;
use Plenty\Modules\Item\Property\Models\PropertyItem;

/**
 * The VariationPropertyValue
 */
abstract class VariationPropertyValue 
{
	public int $id;
	public int $article_id;
	public int $character_item_id;
	public int $character_selection_id;
	public int $value_int;
	public float $value_float;
	public string $value_file;
	public float $markup;
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