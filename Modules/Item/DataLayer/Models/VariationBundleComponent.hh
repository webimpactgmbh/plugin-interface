<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationBundleComponent
 */
abstract class VariationBundleComponent 
{
	public int $componentVariationId;
	public float $componentQuantity;
	public string $CreatedTimestamp;
	public string $LastUpdateTimestamp;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}