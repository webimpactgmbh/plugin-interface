<?php
namespace Plenty\Modules\Plugin\DataBase\Contracts;


/**
 * Database model
 */
abstract class Model 
{

	const FIELD_TYPE_INT = 'int';

	const FIELD_TYPE_DECIMAL = 'decimal';

	const FIELD_TYPE_STRING = 'string';

	const FIELD_TYPE_BOOL = 'bool';
	protected		$primaryKeyFieldName = "id";
	protected		$primaryKeyFieldType = "int";
	
	abstract public function getTableName(
	):string;

}