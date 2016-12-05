<?php
namespace Plenty\Modules\Item\Attribute\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Attribute\Models\AttributeValueName;

/**
 * Repository for AttributeValueName
 */
interface AttributeValueNameRepositoryContract 
{

	public function create(
		array $data, 
		int $valueId
	):AttributeValueName;

	public function delete(
		int $valueId, 
		string $lang
	):boolean;

	public function update(
		array $data, 
		int $valueId, 
		string $lang
	):AttributeValueName;

	public function findOne(
		int $valueId, 
		string $lang
	):AttributeValueName;

	public function findByValueId(
		int $valueId
	):AttributeValueName;

}