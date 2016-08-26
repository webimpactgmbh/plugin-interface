<?hh
namespace Plenty\Modules\Item\VariationCategory\Models;


/**
 * Variation Category
 */
abstract class VariationCategory 
{
	public int $variationId;
	public int $categoryId;
	public int $position;
	public string $isNeckermannPrimary;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}