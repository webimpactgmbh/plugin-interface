<?hh
namespace Plenty\Modules\Frontend\Events;


/**
 * shipping settings changed event
 */
abstract class FrontendUpdateShippingSettings 
{

	abstract public function getShippingCosts(
	):float;

	abstract public function getParcelServiceId(
	):int;

	abstract public function getParcelServicePresetId(
	):int;

}