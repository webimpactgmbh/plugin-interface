<?php
namespace Plenty\Modules\Item\Attribute\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Attribute\Models\Attribute;

/**
 * Repository for Attribute
 */
interface AttributeRepositoryContract 
{

	public function create(
		array $data
	):Attribute;

	public function show(
		int $id
	):Attribute;

	public function update(
		array $data, 
		int $id
	);

	public function delete(
		int $id
	):boolean;

	public function findById(
		int $id
	):Attribute;

	public function all(
		array $columns = [], 
		int $perPage = 50, 
		int $page = 1
	):array;

}