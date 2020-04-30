<?php
namespace Plenty\Modules\Catalog\Contracts;

use Exception;
use Plenty\Repositories\Models\PaginatedResult;

/**
 * To be written
 */
interface FieldGroupRepositoryContract 
{

	public function getFields(
		string $id, 
		int $page, 
		int $itemsPerPage, 
		string $parentId = null
	):PaginatedResult;

	public function getFieldById(
		string $id, 
		string $fieldId
	):array;

	public function fieldValuesTree(
		string $id, 
		int $page, 
		int $itemsPerPage
	):array;

}