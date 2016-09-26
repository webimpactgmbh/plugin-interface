<?hh
namespace Plenty\Modules\Frontend\Session\Storage\Models;


/**
 * session storage model for order data
 */
abstract class Order 
{
	public int $deliveryAddressId;
	public int $parcelServiceId;
	public int $parcelServicePresetId;
	public int $methodOfPayment;
	public bool $isNet;
	public int $shippingCosts;
	public string $orderinfoText;
	public int $payDataComplete;
	public array<string> $itemOrderParams;
	public array<string> $uploadedFileStack;
	public array<string> $trustedShopBuyerProtection;
	public string $trustedShopApplicationId;
	public string $coupon;
	public string $couponDisplay;
	public array<string> $activePaymentMethodsList;
	public int $referrerId;
	public int $referrerPriceColumn;
	public int $referrerItemId;
	public int $schedulerId;
	public int $schedulerIntervalId;
	public int $schedulerOrderExecutionId;
	public int $schedulerFirstDeliveryDate;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}