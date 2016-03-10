<?hh
namespace Plenty\Modules\Item\DataLayer\Models;
/**
 * VariationRetailPrice
 */
abstract class VariationRetailPrice{
	public int $priceId;

	public float $price;

	public float $retailPriceNet;

	public int $basePrice;

	public float $basePriceNet;

	public float $unitPrice;

	public float $unitPriceNet;

	public float $orderParamsMarkup;

	public float $orderParamsMarkupNet;

	public float $classRebatePercent;

	public float $classRebate;

	public float $classRebateNet;

	public float $categoryRebatePercent;

	public float $categoryRebate;

	public float $categoryRebateNet;

	public int $vatId;

	public float $vatValue;

	public string $currency;

	public float $exchangeRatio;

}