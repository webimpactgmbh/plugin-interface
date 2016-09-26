<?hh
namespace Plenty\Modules\Frontend\PaymentMethod\Contracts;

use Illuminate\Support\Collection;
use Plenty\Modules\Payment\Method\Models\PaymentMethod;

/**
 * Repository to load payment methods for the front end
 */
interface FrontendPaymentMethodRepositoryContract 
{

	public function getCurrentPaymentMethodsList(
	):array<PaymentMethod>;

	public function getPaymentMethodName(
		PaymentMethod $paymentMethod
	):string;

	public function getPaymentMethodFee(
		PaymentMethod $paymentMethod
	):float;

	public function getPaymentMethodIcon(
		PaymentMethod $paymentMethod
	):string;

	public function getPaymentMethodDescription(
		PaymentMethod $paymentMethod
	):string;

}