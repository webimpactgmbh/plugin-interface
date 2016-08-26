<?hh
namespace Plenty\Modules\Frontend\Events;


/**
 * language changed event
 */
abstract class FrontendLanguageChanged 
{

	abstract public function getLanguage(
	):string;

}