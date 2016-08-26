<?hh
namespace Plenty\Modules\Frontend\Events;


/**
 * currency changed event
 */
abstract class FrontendCurrencyChanged 
{

	abstract public function getCurrency(
	):string;

	abstract public function getCurrencyExchangeRatio(
	):float;

}