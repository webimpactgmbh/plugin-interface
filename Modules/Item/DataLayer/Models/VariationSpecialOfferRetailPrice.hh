<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationSpecialOfferRetailPrice
 */
abstract class VariationSpecialOfferRetailPrice 
{
	public int $retailPriceId;
	public float $retailPrice;
	public float $retailPriceNet;
	public float $basePrice;
	public float $basePriceNet;
	public float $unitPrice;
	public float $unitPriceNet;
	public float $orderParamsMarkup;
	public float $orderParamsMarkupNet;
	public int $vatId;
	public float $vatValue;
	public mixed $currency;
	public float $exchangeRatio;
	public mixed $lastUpdateTimestamp;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}