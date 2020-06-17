<?php
namespace Plenty\Modules\Catalog\Contracts;

use Plenty\Modules\Catalog\Models\Catalog;
use Plenty\Repositories\Contracts\FilterableContract;
use Plenty\Repositories\Models\PaginatedResult;

/**
 * To be written
 */
interface CatalogRepositoryContract 
{

	/**
	 * Create a catalog
	 */
	public function create(
		array $data
	):Catalog;

	/**
	 * Update a catalog
	 */
	public function update(
		string $id, 
		array $data
	):Catalog;

	/**
	 * Get a catalog
	 */
	public function get(
		string $id
	):Catalog;

	/**
	 * Delete a catalog
	 */
	public function delete(
		string $id
	):bool;

	/**
	 * Copy a catalog or multiple catalogs
	 */
	public function copy(
		array $data
	):array;

	/**
	 * Copy a catalog format
	 */
	public function copyCatalogFormat(
		string $catalogId, 
		array $data
	):array;

	/**
	 * Get list of all catalogs
	 */
	public function all(
		int $page = 1, 
		int $perPage = 25
	):PaginatedResult;

	/**
	 * Activate a catalog
	 */
	public function activate(
		string $id, 
		bool $active
	):array;

	/**
	 * Sets the filter array.
	 */
	public function setFilters(
		array $filters = []
	);

	/**
	 * Returns the filter array.
	 */
	public function getFilters(
	);

	/**
	 * Returns a collection of parsed filters as Condition object
	 */
	public function getConditions(
	);

	/**
	 * Clears the filter array.
	 */
	public function clearFilters(
	);

}