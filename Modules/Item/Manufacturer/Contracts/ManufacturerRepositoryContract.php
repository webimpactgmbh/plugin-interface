<?php
namespace Plenty\Modules\Item\Manufacturer\Contracts;

use Plenty\Modules\Item\Manufacturer\Models\Manufacturer;
use Plenty\Repositories\Models\PaginatedResult;

/**
 * Repository for item manufacturers
 */
interface ManufacturerRepositoryContract 
{

	/**
	 * store a new manufacturer
	 */
	public function create(
		array $data
	):Manufacturer;

	/**
	 * Update an existing manufacturer
	 */
	public function update(
		array $data, 
		int $manufacturerId
	):Manufacturer;

	/**
	 * Delete a manufacturer by the manufacturer id
	 */
	public function delete(
		int $manufacturerId
	);

	/**
	 * Find an existing Manufacturer
	 */
	public function findById(
		int $manufacturerId
	):Manufacturer;

	public function all(
		array $columns = [], 
		int $perPage = 50, 
		int $page = 1
	):PaginatedResult;

	/**
	 * Search manufacturers by Filter
	 */
	public function search(
		array $params = [], 
		array $columns = []
	):PaginatedResult;

}