<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * ItemDataLayer - ItemBase
 */
abstract class ItemBase 
{
	public int $abo;
	public int $addCmsPage;
	public int $amazonFba;
	public int $amazonProductType;
	public int $apiCondition;
	public int $storeSpecial;
	public float $bestofferAutoDeclinePrice;
	public int $condition;
	public int $crossSellingCharacter;
	public string $customsTariffNumber;
	public float $defaultShippingCost;
	public int $directCrossArticle;
	public int $ebayCategory;
	public int $ebayCategory2;
	public int $ebayPreset;
	public int $ebayStoreCategory;
	public int $ebayStoreCategory2;
	public string $epid;
	public string $fedas;
	public int $markingOne;
	public int $markingTwo;
	public string $flashFile;
	public int $flashHeight;
	public int $flashWidth;
	public string $free1;
	public string $free2;
	public string $free3;
	public string $free4;
	public string $free5;
	public string $free6;
	public int $free7;
	public int $free8;
	public int $free9;
	public int $free10;
	public int $free11;
	public int $free12;
	public int $free13;
	public int $free14;
	public int $free15;
	public int $free16;
	public int $free17;
	public int $free18;
	public int $free19;
	public int $free20;
	public int $ageRestriction;
	public string $hasAttribute;
	public int $id;
	public int $inactive;
	public string $createDate;
	public int $isPacket;
	public int $marketStockBuffer;
	public int $noCoupon;
	public int $producingCountryId;
	public int $position;
	public int $priceOnly4orderby;
	public string $producer;
	public int $producerId;
	public int $rating;
	public int $ratingCount;
	public int $revenueAccount;
	public int $scoActive;
	public float $scoMinPrice;
	public int $scoMinStockNet;
	public int $serialNumber;
	public string $shippingWithAmazonFba;
	public int $sitemapPublished;
	public string $storingPosition;
	public string $lastUpdateTimestamp;
	public int $type;
	public int $votes;
	public int $variationCount;
	public int $tradoriaCategory;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}