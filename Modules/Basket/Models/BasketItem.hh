<?hh
namespace Plenty\Modules\Basket\Models;
/**
 * The basket item model
 */
abstract class BasketItem{
	public int $id;

	public int $basketId;

	public string $sessionId;

	public int $orderRowId;

	public float $quantity;

	public float $quantityOriginally;

	public int $itemId;

	public int $priceId;

	public int $attributeValueSetId;

	public int $rebate;

	public float $vat;

	public float $price;

	public float $givenPrice;

	public bool $useGivenPrice;

	public int $inputWidth;

	public int $inputLength;

	public int $inputHeight;

	public int $itemType;

	public string $externalItemId;

	public bool $noEditByCustomer;

	public int $costCenterId;

	public int $giftPackageForRowId;

	public int $position;

	public string $size;

	public int $shippingProfileId;

	public float $referrerId;

	public string $deliveryDate;

	public int $categoryId;

	public int $reservationDatetime;

	public int $variationId;

	public int $bundleVariationId;

	public string $createdAt;

	public string $updatedAt;

}