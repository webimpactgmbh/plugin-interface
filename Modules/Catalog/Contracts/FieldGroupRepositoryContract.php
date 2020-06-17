<?php
namespace Plenty\Modules\Catalog\Contracts;

use Exception;
use Plenty\Repositories\Models\PaginatedResult;

/**
 * To be written
 */
interface FieldGroupRepositoryContract 
{

	/**
	 * Get list of fields
	 */
	public function getFields(
		string $id, 
		int $page, 
		int $itemsPerPage, 
		string $parentId = null
	):PaginatedResult;

	/**
	 * Get field by id
	 */
	public function getFieldById(
		string $id, 
		string $fieldId
	):array;

	/**
	 * Get Fields by id of the catalog
	 */
	public function getFieldsByCatalogId(
		string $id, 
		string $catalogId
	):array;

	public function fieldValuesTree(
		string $id, 
		int $page, 
		int $itemsPerPage
	):array;

}