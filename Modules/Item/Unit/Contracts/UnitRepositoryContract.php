<?php
namespace Plenty\Modules\Item\Unit\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Unit\Models\Unit;

/**
 * Repository for Unit
 */
interface UnitRepositoryContract 
{

	public function create(
		array $data
	):Unit;

	public function show(
		int $id
	):Unit;

	public function update(
		array $data, 
		int $id
	);

	public function delete(
		int $id
	):boolean;

	public function findById(
		int $id
	):Unit;

	public function all(
		array $columns = [], 
		int $perPage = 50, 
		int $page = 1
	):array;

}