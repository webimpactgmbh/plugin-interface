<?hh
namespace Plenty\Modules\Helper\Models;
/**
 * key value data
 */
abstract class KeyValue{
	abstract public function get<T>(
		string $key,
		mixed $default = NULL
	):T;
}