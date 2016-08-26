<?hh
namespace Plenty\Modules\Frontend\Services;

use Plenty\Repositories\Models\DataModel;

/**
 * Frontend-service for file information
 */
abstract class FileService 
{

	abstract public function addJsFile(
		string $jsFile
	):void;

	abstract public function get(
		string $key
	):mixed;

	abstract public function setAttributes(
		 $attributes
	):void;

	abstract public function changeValue(
		string $key, 
		callable $callback
	):void;

	abstract public function offsetExists(
		mixed $offset
	):bool;

	abstract public function offsetGet(
		mixed $offset
	):mixed;

	abstract public function offsetSet(
		mixed $offset, 
		mixed $value
	):void;

	abstract public function offsetUnset(
		mixed $offset
	):void;

	abstract public function toArray(
	):array<string>;

	abstract public function toJson(
		int $options = 0
	):string;

	abstract public function jsonSerialize(
	):void;

}