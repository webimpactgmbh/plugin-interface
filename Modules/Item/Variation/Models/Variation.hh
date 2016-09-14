<?hh
namespace Plenty\Modules\Item\Variation\Models;

use Plenty\Modules\Item\VariationBarcode\Models\VariationBarcode;
use Plenty\Modules\Item\VariationSalesPrice\Models\VariationSalesPrice;
use Plenty\Modules\Item\VariationMarketIdentNumber\Models\VariationMarketIdentNumber;
use Plenty\Modules\Item\VariationCategory\Models\VariationCategory;
use Plenty\Modules\Item\VariationClient\Models\VariationClient;
use Plenty\Modules\Item\VariationMarket\Models\VariationMarket;
use Plenty\Modules\Item\VariationDefaultCategory\Models\VariationDefaultCategory;
use Plenty\Modules\Item\VariationSupplier\Models\VariationSupplier;
use Plenty\Modules\Item\VariationWarehouse\Models\VariationWarehouse;

/**
 * Variation
 */
abstract class Variation 
{
	public bool $isActive;
	public int $attributeValueSetId;
	public bool $autoStockInvisible;
	public bool $autoStockNoStockIcon;
	public bool $autoStockPositiveStockIcon;
	public bool $autoStockVisible;
	public int $automaticClientVisibility;
	public int $availability;
	public string $availableUntil;
	public string $createdTimestamp;
	public string $customNumber;
	public float $customsPercent;
	public string $estimatedAvailability;
	public string $externalId;
	public float $extraShippingCharge1;
	public float $extraShippingCharge2;
	public int $heightMm;
	public int $id;
	public int $intervalOrderQuantity;
	public string $lastUpdateTimestamp;
	public int $lengthMm;
	public int $limitOrderByStockSelect;
	public int $mainWarehouse;
	public int $maximumOrderQuantity;
	public int $minimumOrderQuantity;
	public string $model;
	public float $operatingCostsPercent;
	public string $packingUnitType;
	public int $packingUnits;
	public int $parentItemVariationQuantity;
	public string $picking;
	public int $position;
	public int $priceCalculationSetId;
	public bool $isMain;
	public int $mainVariationId;
	public float $purchasePrice;
	public string $relatedLastUpdateTimestamp;
	public string $releaseDate;
	public float $storageCosts;
	public float $transportationCosts;
	public int $unitCombinationId;
	public int $unitLoadDevice;
	public float $unitsContained;
	public string $variationName;
	public int $vatId;
	public int $weightG;
	public int $weightNetG;
	public int $widthMm;
	public array<VariationBarcode> $variationBarcodes;
	public array<VariationSalesPrice> $variationSalesPrices;
	public array<VariationMarketIdentNumber> $marketItemNumbers;
	public array<VariationCategory> $variationCategories;
	public array<VariationClient> $variationClients;
	public array<VariationMarket> $variationMarkets;
	public VariationDefaultCategory $variationDefaultCategory;
	public array<VariationSupplier> $variationSuppliers;
	public array<VariationWarehouse> $variationWarehouses;
	public int $itemId;
	public int $categoryVariationId;
	public int $marketVariationId;
	public int $clientVariationId;
	public int $salesPriceVariationId;
	public int $supplierVariationId;
	public int $warehouseVariationId;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}