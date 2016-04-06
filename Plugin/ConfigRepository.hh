<?hh
namespace Plenty\Plugin;


/**
 * configuration repository
 */
abstract class ConfigRepository 
{

	const string PLUGIN_CONFIG_PREFIX = 'plugins';

	/**
	 * Determine if the given configuration value exists.
	 */
	abstract public function has(
		string $key
	):bool;

	/**
	 * Get the specified configuration value.
	 */
	abstract public function get<T>(
		string $key, 
		mixed $default = NULL
	):T;

	/**
	 * Set a given configuration value.
	 */
	abstract public function set(
		string $key, 
		mixed $value = NULL
	):void;

	/**
	 * Prepend a value onto an array configuration value.
	 */
	abstract public function prepend(
		string $key, 
		mixed $value
	):void;

	/**
	 * Push a value onto an array configuration value.
	 */
	abstract public function push(
		string $key, 
		mixed $value
	):void;

}