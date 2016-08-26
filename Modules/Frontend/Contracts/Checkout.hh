<?hh
namespace Plenty\Modules\Frontend\Contracts;


/**
 * checkout service
 */
interface Checkout 
{

	public function setShippingCountryId(
		int $shippingCountryId
	):void;

	public function setPaymentMethodId(
		int $paymentMethodId
	):void;

	public function setShippingProfileId(
		int $shippingProfileId
	):void;

	public function setCurrency(
		string $currency
	):void;

}