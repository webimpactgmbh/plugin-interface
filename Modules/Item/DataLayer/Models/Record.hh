<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * Record
 */
abstract class Record 
{
	public \Plenty\Modules\Item\DataLayer\Models\ItemBase $itemBase;
	public array<\Plenty\Modules\Item\DataLayer\Models\ItemProperty> $itemPropertyList;
	public array<\Plenty\Modules\Item\DataLayer\Models\ItemCrossSelling> $itemCrossSellingList;
	public \Plenty\Modules\Item\DataLayer\Models\ItemDescription $itemDescription;
	public array<\Plenty\Modules\Item\DataLayer\Models\ItemShippingProfiles> $itemShippingProfilesList;
	public array<\Plenty\Modules\Item\DataLayer\Models\VariationAttributeValue> $variationAttributeValueList;
	public \Plenty\Modules\Item\DataLayer\Models\VariationBarcode $variationBarcode;
	public array<\Plenty\Modules\Item\DataLayer\Models\VariationBarcode> $variationBarcodeList;
	public \Plenty\Modules\Item\DataLayer\Models\VariationBase $variationBase;
	public array<\Plenty\Modules\Item\DataLayer\Models\VariationBundleComponent> $variationBundleComponentList;
	public array<\Plenty\Modules\Item\DataLayer\Models\VariationCategory> $variationCategoryList;
	public array<\Plenty\Modules\Item\DataLayer\Models\VariationImage> $variationImageList;
	public array<\Plenty\Modules\Item\DataLayer\Models\VariationLinkMarketplace> $variationLinkMarketplace;
	public array<\Plenty\Modules\Item\DataLayer\Models\VariationLinkWebstore> $variationLinkWebstore;
	public \Plenty\Modules\Item\DataLayer\Models\VariationMarketStatus $variationMarketStatus;
	public \Plenty\Modules\Item\DataLayer\Models\VariationRetailPrice $variationRecommendedRetailPrice;
	public array<\Plenty\Modules\Item\DataLayer\Models\VariationRetailPrice> $variationRecommendedRetailPriceList;
	public \Plenty\Modules\Item\DataLayer\Models\VariationRetailPrice $variationRetailPrice;
	public array<\Plenty\Modules\Item\DataLayer\Models\VariationRetailPrice> $variationRetailPriceList;
	public \Plenty\Modules\Item\DataLayer\Models\VariationStandardCategory $variationStandardCategory;
	public \Plenty\Modules\Item\DataLayer\Models\VariationStock $variationStock;
	public \Plenty\Modules\Item\DataLayer\Models\VariationStockBuffer $variationStockBuffer;
	public array<\Plenty\Modules\Item\DataLayer\Models\VariationStock> $variationStockList;
	public array<\Plenty\Modules\Item\DataLayer\Models\VariationSupplier> $variationSupplierList;
	public \Plenty\Modules\Item\DataLayer\Models\VariationWarehouse $variationWarehouse;
	public array<\Plenty\Modules\Item\DataLayer\Models\VariationWarehouse> $variationWarehouseList;
	public \Plenty\Modules\Item\DataLayer\Models\VariationSpecialOfferRetailPrice $variationSpecialOfferRetailPrice;
	public array<\Plenty\Modules\Item\DataLayer\Models\VariationSpecialOfferRetailPrice> $variationSpecialOfferRetailPriceList;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}