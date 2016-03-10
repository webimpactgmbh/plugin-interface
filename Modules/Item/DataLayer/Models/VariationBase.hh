<?hh
namespace Plenty\Modules\Item\DataLayer\Models;
/**
 * VariationBase
 */
abstract class VariationBase{
	public int $active;

	public int $attributeValueSetId;

	public string $autoStockInvisible;

	public string $bundleTyp;

	public string $autoStockNoStockIcon;

	public string $autoStockPositiveStockIcon;

	public string $autoStockVisible;

	public int $availability;

	public string $averageOrderQuantity;

	public string $content;

	public int $unitCombinationId;

	public string $createdTimestamp;

	public string $customNumber;

	public string $estimatedAvailability;

	public string $externalId;

	public float $extraShippingCharge1;

	public float $extraShippingCharge2;

	public int $heightMm;

	public int $id;

	public int $itemId;

	public string $lastUpdateTimestamp;

	public int $lengthMm;

	public int $limitOrderByStockSelect;

	public int $mainWarehouse;

	public string $model;

	public float $operatingCostsPercent;

	public int $packingUnits;

	public int $packingUnitType;

	public int $parentVariationId;

	public float $parentItemVariationQuantity;

	public string $picking;

	public float $customsPercent;

	public int $position;

	public int $priceCalculationId;

	public string $primaryVariation;

	public int $primaryVariationId;

	public float $purchasePrice;

	public float $storageCosts;

	public float $transportationCosts;

	public mixed $unitId;

	public int $unitLoadDevice;

	public int $unitsContained;

	public int $vatId;

	public string $variationName;

	public int $weightG;

	public int $weightNetG;

	public float $maximumOrderQuantity;

	public float $minimumOrderQuantity;

	public float $intervalOrderQuantity;

	public string $availableUntil;

	public int $releaseDate;

	public int $widthMm;

}