<?hh
namespace Plenty\Modules\Frontend\Events;


/**
 * payment settings changed event
 */
abstract class FrontendUpdatePaymentSettings 
{

	abstract public function getPaymentMethodId(
	):int;

}