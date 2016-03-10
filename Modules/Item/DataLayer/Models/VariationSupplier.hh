<?hh
namespace Plenty\Modules\Item\DataLayer\Models;
/**
 * VariationSupplier
 */
abstract class VariationSupplier{
	public string $createdTimestamp;

	public mixed $deliveryTimeInDays;

	public float $discount;

	public string $discountable;

	public int $id;

	public string $itemNumber;

	public mixed $itemVariationId;

	public string $lastPriceQuery;

	public string $lastUpdateTimestamp;

	public int $minimumOrderValue;

	public float $packagingUnit;

	public float $purchasePrice;

	public int $supplierId;

}