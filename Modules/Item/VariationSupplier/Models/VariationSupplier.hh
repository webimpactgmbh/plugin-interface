<?hh
namespace Plenty\Modules\Item\VariationSupplier\Models;


/**
 * Variation Supplier
 */
abstract class VariationSupplier 
{
	public int $id;
	public int $variationId;
	public int $supplierId;
	public float $purchasePrice;
	public int $minimumOrderValue;
	public string $itemNumber;
	public string $lastPriceQuery;
	public int $deliveryTimeInDays;
	public float $discount;
	public string $discountable;
	public float $packagingUnit;
	public string $updatedAt;
	public string $createdAt;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}