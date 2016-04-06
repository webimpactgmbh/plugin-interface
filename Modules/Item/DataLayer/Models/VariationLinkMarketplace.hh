<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationLinkMarketplace
 */
abstract class VariationLinkMarketplace 
{
	public string $created;
	public float $marketplaceId;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}