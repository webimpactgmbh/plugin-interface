<?hh
namespace Plenty\Modules\Item\VariationSalesPrice\Models;


/**
 * VariationSalesPrice
 */
abstract class VariationSalesPrice 
{
	public int $variationId;
	public int $salesPriceId;
	public float $price;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}