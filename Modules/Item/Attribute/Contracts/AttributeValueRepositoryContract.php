<?php
namespace Plenty\Modules\Item\Attribute\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Attribute\Models\AttributeValue;

/**
 * Repository for AttributeValue
 */
interface AttributeValueRepositoryContract 
{

	public function create(
		array $data, 
		int $attributeId
	):AttributeValue;

	public function update(
		array $data, 
		int $attributeId, 
		int $id
	);

	public function delete(
		int $attributeId, 
		int $id
	):boolean;

	public function findByAttributeId(
		int $attributeId, 
		int $page = 1, 
		int $perPage = 50, 
		array $columns = []
	):array;

	public function findById(
		int $attributeId, 
		int $id
	):AttributeValue;

	public function all(
		array $columns = [], 
		int $perPage = 50
	):array;

}