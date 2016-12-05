<?php
namespace Plenty\Modules\Item\Property\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Property\Models\PropertyItem;

/**
 * Repository for property item
 */
interface PropertyItemRepositoryContract 
{

	public function create(
		array $data
	):PropertyItem;

	public function show(
		int $id
	):PropertyItem;

	public function update(
		array $data, 
		int $id
	);

	public function delete(
		int $id
	):boolean;

	public function findById(
		int $id
	):PropertyItem;

	public function all(
		array $columns = [], 
		int $perPage = 50, 
		int $page = 1
	):array;

}