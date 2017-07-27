<?php
namespace Plenty\Modules\Document\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Exceptions\ValidationException;
use Plenty\Modules\Document\Models\Document;
use Plenty\Repositories\Contracts\FilterableContract;
use Plenty\Repositories\Criteria\Contracts\CriteriableContract;
use Plenty\Repositories\Criteria\Criteria;
use Plenty\Repositories\Models\DeleteResponse;
use Plenty\Repositories\Models\PaginatedResult;

/**
 * Download and list order documents as well as download, list, upload and delete category documents.
 */
interface DocumentRepositoryContract 
{

	/**
	 * Get the path to a document
	 */
	public function getDocumentPath(
		int $id
	);

	/**
	 * Get a document
	 */
	public function findById(
		int $id, 
		array $columns = []
	):Document;

	/**
	 * List documents
	 */
	public function find(
		int $page = 1, 
		int $itemsPerPage = 50, 
		array $columns = []
	):PaginatedResult;

	/**
	 * Upload one document
	 */
	public function upload(
		array $data
	):Document;

	/**
	 * Deletes a document. The ID of the document must be specified.
	 */
	public function delete(
		int $referenceType, 
		int $referenceValue, 
		int $documentId
	):bool;

	/**
	 * Applies criteria classes to the current repository.
	 */
	public function applyCriteriaFromFilters(
	);

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