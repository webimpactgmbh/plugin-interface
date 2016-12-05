<?php
namespace Plenty\Modules\Item\Property\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Property\Models\PropertyItemName;

/**
 * Repository for property item name
 */
interface PropertyItemNameRepositoryContract 
{

	public function create(
		array $data, 
		int $propertyItemId
	):PropertyItemName;

	public function delete(
		int $propertyItemId, 
		string $lang
	):boolean;

	public function update(
		array $data, 
		int $propertyItemId, 
		string $lang
	):PropertyItemName;

	public function findOne(
		int $propertyItemId, 
		string $lang
	):PropertyItemName;

	public function findByPropertyItemId(
		int $propertyItemId
	):PropertyItemName;

}