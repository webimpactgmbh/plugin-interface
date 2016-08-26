<?hh
namespace Plenty\Modules\Frontend\Events;


/**
 * delivery address changed event
 */
abstract class FrontendUpdateDeliveryAddress 
{

	abstract public function getAccountAddressId(
	):int;

}