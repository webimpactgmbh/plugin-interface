<?php
namespace Plenty\Modules\Plugin\DataBase\Contracts;


/**
 * Database contract
 */
interface DataBase 
{

	public function save(
		\Plenty\Modules\Plugin\DataBase\Contracts\Model $model
	):\Plenty\Modules\Plugin\DataBase\Contracts\Model;

	public function find(
		string $modelClassName, 
		 $primaryKeyFieldValue
	):\Plenty\Modules\Plugin\DataBase\Contracts\Model;

	public function query(
		string $tableName, 
		array $queryParams
	):array;

	public function delete(
		\Plenty\Modules\Plugin\DataBase\Contracts\Model $model
	):bool;

}