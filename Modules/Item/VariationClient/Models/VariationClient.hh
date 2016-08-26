<?hh
namespace Plenty\Modules\Item\VariationClient\Models;


/**
 * Variation Client
 */
abstract class VariationClient 
{
	public int $variationId;
	public int $plentyId;
	public string $createdAt;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}