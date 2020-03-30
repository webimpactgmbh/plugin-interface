<?php
namespace Plenty\Modules\Plugin\DataBase\Contracts;

use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Plugin\Traits\ActsAsModel;
use Plenty\Modules\Plugin\Traits\HasAttributes;

/**
 * Database model
 */
abstract class Model 
{

	const FIELD_TYPE_INT = 'int';

	const FIELD_TYPE_UNSIGNED_INT = 'unsignedInteger';

	const FIELD_TYPE_DECIMAL = 'decimal';

	const FIELD_TYPE_STRING = 'string';

	const FIELD_TYPE_BOOL = 'bool';

	const FIELD_TYPE_ARRAY = 'array';

	const FIELD_TYPE_TEXT = 'text';

	const FIELD_TYPES = ['int','decimal','string','bool','array','text'];
	protected		$primaryKeyFieldName = "id";
	protected		$primaryKeyFieldType = "int";
	protected		$autoIncrementPrimaryKey = true;
	protected		$textFields;
	protected		$attributes;
	protected		$original;
	protected		$changes;
	protected		$casts;
	protected		$dates;
	protected		$dateFormat = null;
	protected static 		$mutatorCache;
	
	abstract public function getTableName(
	):string;

	/**
	 * Return a timestamp as DateTime object with time set to 00:00:00.
	 */
	protected function asDate(
		 $value
	):\Carbon\Carbon
	{
	}

	/**
	 * Convert the model's attributes to an array.
	 */
	abstract public function attributesToArray(
	):array;

	/**
	 * Add the date attributes to the attributes array.
	 */
	protected function addDateAttributesToArray(
		array $attributes
	):array
	{
	}

	/**
	 * Add the mutated attributes to the attributes array.
	 */
	protected function addMutatedAttributesToArray(
		array $attributes, 
		array $mutatedAttributes
	):array
	{
	}

	/**
	 * Add the casted attributes to the attributes array.
	 */
	protected function addCastAttributesToArray(
		array $attributes, 
		array $mutatedAttributes
	):array
	{
	}

	/**
	 * Get an attribute array of all arrayable attributes.
	 */
	protected function getArrayableAttributes(
	):array
	{
	}

	/**
	 * Get an attribute array of all arrayable values.
	 */
	protected function getArrayableItems(
		array $values
	):array
	{
	}

	/**
	 * Get an attribute from the model.
	 */
	abstract public function getAttribute(
		string $key
	);

	/**
	 * Get a plain attribute
	 */
	abstract public function getAttributeValue(
		string $key
	);

	/**
	 * Get an attribute from the $attributes array.
	 */
	protected function getAttributeFromArray(
		string $key
	)
	{
	}

	/**
	 * Determine if a get mutator exists for an attribute.
	 */
	abstract public function hasGetMutator(
		string $key
	):bool;

	/**
	 * Get the value of an attribute using its mutator.
	 */
	protected function mutateAttribute(
		string $key, 
		 $value
	)
	{
	}

	/**
	 * Get the value of an attribute using its mutator for array conversion.
	 */
	protected function mutateAttributeForArray(
		string $key, 
		 $value
	)
	{
	}

	/**
	 * Cast an attribute to a native PHP type.
	 */
	protected function castAttribute(
		string $key, 
		 $value
	)
	{
	}

	/**
	 * Get the type of cast for a model attribute.
	 */
	protected function getCastType(
		string $key
	):string
	{
	}

	/**
	 * Set a given attribute on the model.
	 */
	abstract public function setAttribute(
		string $key, 
		 $value
	):self;

	/**
	 * Determine if a set mutator exists for an attribute.
	 */
	abstract public function hasSetMutator(
		string $key
	):bool;

	/**
	 * Determine if the given attribute is a date or date castable.
	 */
	protected function isDateAttribute(
		string $key
	):bool
	{
	}

	/**
	 * Set a given JSON attribute on the model.
	 */
	abstract public function fillJsonAttribute(
		string $key, 
		 $value
	):self;

	/**
	 * Get an array attribute with the given key and value set.
	 */
	protected function getArrayAttributeWithValue(
		string $path, 
		string $key, 
		 $value
	):self
	{
	}

	/**
	 * Get an array attribute or return an empty array if it is not set.
	 */
	protected function getArrayAttributeByKey(
		string $key
	):array
	{
	}

	/**
	 * Cast the given attribute to JSON.
	 */
	protected function castAttributeAsJson(
		string $key, 
		 $value
	):string
	{
	}

	/**
	 * Encode the given value as JSON.
	 */
	protected function asJson(
		 $value
	):string
	{
	}

	/**
	 * Decode the given JSON back into an array or object.
	 */
	abstract public function fromJson(
		string $value, 
		bool $asObject = false
	);

	/**
	 * Return a timestamp as DateTime object.
	 */
	protected function asDateTime(
		 $value
	):\Carbon\Carbon
	{
	}

	/**
	 * Determine if the given value is a standard date format.
	 */
	protected function isStandardDateFormat(
		string $value
	):bool
	{
	}

	/**
	 * Convert a DateTime to a storable string.
	 */
	abstract public function fromDateTime(
		 $value
	):string;

	/**
	 * Return a timestamp as unix timestamp.
	 */
	protected function asTimestamp(
		 $value
	):int
	{
	}

	protected function serializeDate(
		\DateTimeInterface $date
	):string
	{
	}

	/**
	 * Get the attributes that should be converted to dates.
	 */
	abstract public function getDates(
	):array;

	/**
	 * Get the format for database stored dates.
	 */
	protected function getDateFormat(
	):string
	{
	}

	/**
	 * Set the date format used by the model.
	 */
	abstract public function setDateFormat(
		string $format
	):self;

	/**
	 * Determine whether an attribute should be cast to a native type.
	 */
	abstract public function hasCast(
		string $key, 
		 $types = null
	):bool;

	/**
	 * Get the casts array.
	 */
	abstract public function getCasts(
	):array;

	/**
	 * Determine whether a value is Date / DateTime castable for inbound manipulation.
	 */
	protected function isDateCastable(
		string $key
	):bool
	{
	}

	/**
	 * Determine whether a value is JSON castable for inbound manipulation.
	 */
	protected function isJsonCastable(
		string $key
	):bool
	{
	}

	/**
	 * Get all of the current attributes on the model.
	 */
	abstract public function getAttributes(
	):array;

	/**
	 * Set the array of model attributes. No checking is done.
	 */
	abstract public function setRawAttributes(
		array $attributes, 
		bool $sync = false
	):self;

	/**
	 * Get the model's original attribute values.
	 */
	abstract public function getOriginal(
		string $key = null, 
		 $default = null
	);

	/**
	 * Get a subset of the model's attributes.
	 */
	abstract public function only(
		 $attributes
	):array;

	/**
	 * Sync the original attributes with the current.
	 */
	abstract public function syncOriginal(
	):self;

	/**
	 * Sync a single original attribute with its current value.
	 */
	abstract public function syncOriginalAttribute(
		string $attribute
	):self;

	/**
	 * Sync the changed attributes.
	 */
	abstract public function syncChanges(
	):self;

	/**
	 * Determine if the model or given attribute(s) have been modified.
	 */
	abstract public function isDirty(
		 $attributes = null
	):bool;

	/**
	 * Determine if the model or given attribute(s) have remained the same.
	 */
	abstract public function isClean(
		 $attributes = null
	):bool;

	/**
	 * Determine if the model or given attribute(s) have been modified.
	 */
	abstract public function wasChanged(
		 $attributes = null
	):bool;

	/**
	 * Determine if the given attributes were changed.
	 */
	protected function hasChanges(
		array $changes, 
		 $attributes = null
	):bool
	{
	}

	/**
	 * Get the attributes that have been changed since last sync.
	 */
	abstract public function getDirty(
	):array;

	/**
	 * Get the attributes that were changed.
	 */
	abstract public function getChanges(
	):array;

	/**
	 * Determine if the new and old values for a given key are equivalent.
	 */
	protected function originalIsEquivalent(
		string $key, 
		 $current
	):bool
	{
	}

	/**
	 * Get the mutated attributes for a given instance.
	 */
	abstract public function getMutatedAttributes(
	):array;

	/**
	 * Extract and cache all the mutated attributes of a class.
	 */
	abstract public static function cacheMutatedAttributes(
		string $class
	);

	/**
	 * Get all of the attribute mutator methods.
	 */
	protected static function getMutatorMethods(
		 $class
	):array
	{
	}

	abstract public function relationLoaded(
	);

}