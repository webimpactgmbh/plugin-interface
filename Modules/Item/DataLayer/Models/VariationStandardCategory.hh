<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationStandardCategory
 */
abstract class VariationStandardCategory 
{
	public int $categoryId;
	public int $plentyId;
	public string $manually;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}