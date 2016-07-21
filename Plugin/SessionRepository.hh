<?hh
namespace Plenty\Plugin;


/**
 * session repository
 */
abstract class SessionRepository 
{

	const string PLUGIN_CONFIG_PREFIX = 'plugins';

	/**
	 * Determine if the given session value exists.
	 */
	abstract public function has(
		string $key
	):bool;

	/**
	 * Get the specified session value.
	 */
	abstract public function get(
		string $key, 
		mixed $default = null
	):mixed;

	/**
	 * Set a given session value.
	 */
	abstract public function set(
		string $key, 
		mixed $value = null
	):void;

	/**
	 * Prepend a value onto an array session value.
	 */
	abstract public function prepend(
		string $key, 
		mixed $value
	):void;

	/**
	 * Push a value onto an array session value.
	 */
	abstract public function push(
		string $key, 
		mixed $value
	):void;

}