<?hh
namespace Plenty\Modules\Frontend\PaymentMethod\Contracts;

use Illuminate\Support\Collection;
use Plenty\Modules\Order\Payment\Method\Models\PaymentMethod;

/**
 * Repository to load payment methods for the front end
 */
interface FrontendPaymentMethodRepositoryContract 
{

	public function getCurrentPaymentMethodsList(
	):array<PaymentMethod>;

	public function getPaymentMethodFee(
		PaymentMethod $paymentMethod, 
		int $destinationCountryId, 
		float $amount
	):float;

}