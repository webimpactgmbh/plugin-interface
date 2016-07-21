<?hh
namespace Plenty\Validation;

use Plenty\Exceptions\ValidationException;
use Plenty\Validation\Contracts\AttributeHelperContract;
use \Validator as BaseValidator;
use Plenty\Validation\Contracts\Attribute;
use Plenty\Validation\DummyAttribute;

/**
 * Base Validator Class
 */
abstract class Validator 
{

	public static function validateOrFail(
		array<string, mixed> $data
	):void
	{
		//proxy method
	}

	abstract protected function defineAttributes(
	):void;

	public function add(
		string $attributeName
	):Attribute
	{
		return new DummyAttribute();
	}

	public function addConditional(
		string $attributeName, 
		bool $required
	):Attribute
	{
		return new DummyAttribute();
	}

	public function addInt(
		string $attributeName, 
		bool $required = false
	):Attribute
	{
		return new DummyAttribute();
	}

	public function addBool(
		string $attributeName, 
		bool $required = false
	):Attribute
	{
		return new DummyAttribute();
	}

	public function addString(
		string $attributeName, 
		bool $required = false
	):Attribute
	{
		return new DummyAttribute();
	}

	public function addNumeric(
		string $attributeName, 
		bool $required = false
	):Attribute
	{
		return new DummyAttribute();
	}

	public function addDate(
		string $attributeName, 
		bool $required = false
	):Attribute
	{
		return new DummyAttribute();
	}

}