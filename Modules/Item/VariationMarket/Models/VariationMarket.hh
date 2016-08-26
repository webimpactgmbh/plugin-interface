<?hh
namespace Plenty\Modules\Item\VariationMarket\Models;


/**
 * Variation Market
 */
abstract class VariationMarket 
{
	public int $variationId;
	public int $marketplaceId;
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