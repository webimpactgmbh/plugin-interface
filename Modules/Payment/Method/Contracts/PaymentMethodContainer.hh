<?hh
namespace Plenty\Modules\Payment\Method\Contracts;


/**
 * payment method container
 */
interface PaymentMethodContainer 
{

	public function register(
		string $paymentKey, 
		string $paymentMethodServiceClass, 
		array<string> $rebuildEventClassesList
	):void;

}