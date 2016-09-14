<?hh
namespace Plenty\Modules\Item\Item\Models;

use Plenty\Modules\Item\Variation\Models\Variation;

/**
 * The item manufacturer model
 */
abstract class Item 
{
	public int $mainVariationId;
	public int $id;
	public int $subscription;
	public string $addCmsPage;
	public string $amazonFba;
	public string $amazonProductstockType;
	public string $apiCondition;
	public string $storeSpecial;
	public int $condition;
	public string $customsTariffNumber;
	public float $defaultShippingCost;
	public string $directCrossItem;
	public string $ebayCategory;
	public string $ebayCategory2;
	public string $ebayPreset;
	public string $ebayStoreCategory;
	public string $ebayStoreCategory2;
	public string $epid;
	public string $fedas;
	public int $flagOne;
	public int $flagTwo;
	public string $flashFile;
	public string $flashHeight;
	public string $flashWidth;
	public string $free1;
	public string $free2;
	public string $free3;
	public string $free4;
	public string $free5;
	public string $free6;
	public string $free7;
	public string $free8;
	public string $free9;
	public string $free10;
	public string $free11;
	public string $free12;
	public string $free13;
	public string $free14;
	public string $free15;
	public string $free16;
	public string $free17;
	public string $free18;
	public string $free19;
	public string $free20;
	public string $ageRating;
	public string $hasAttribute;
	public bool $isActive;
	public string $createDate;
	public bool $isShippingPackage;
	public string $marketStockBuffer;
	public string $noCoupon;
	public int $producingCountryId;
	public int $position;
	public string $manufacturer;
	public int $manufacturerId;
	public int $rating;
	public int $ratingCount;
	public string $revenueAccount;
	public float $scoMinPrice;
	public string $serialNumber;
	public string $shippingWithAmazonFba;
	public string $sitemapPublished;
	public string $sortingPrice;
	public string $lastUpdateTimestamp;
	public string $stockType;
	public string $feedback;
	public int $variationCount;
	public int $variationWithAttributeCount;
	public Variation $mainVariation;
	public array<Variation> $variations;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}