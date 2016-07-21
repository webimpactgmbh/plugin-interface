<?hh
namespace Plenty\Modules\Frontend\Session\Storage\Models;

use Plenty\Modules\Frontend\Session\Storage\Contracts\SessionStorageModel;

/**
 * session storage model for plugins
 */
abstract class Plugin 
{

	abstract public function setValue(
		string $key, 
		mixed $value
	):void;

	abstract public function getValue(
		string $key
	):mixed;

}