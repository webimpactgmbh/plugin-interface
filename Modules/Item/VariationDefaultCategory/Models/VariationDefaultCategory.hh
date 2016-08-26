<?hh
namespace Plenty\Modules\Item\VariationDefaultCategory\Models;


/**
 * Variation Default Category
 */
abstract class VariationDefaultCategory 
{
	public int $variationId;
	public int $branchId;
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