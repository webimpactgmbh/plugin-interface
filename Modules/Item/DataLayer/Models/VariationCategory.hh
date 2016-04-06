<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationCategory
 */
abstract class VariationCategory 
{
	public int $categoryId;
	public int $position;
	public mixed $neckermannPrimary;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}