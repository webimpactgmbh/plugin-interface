<?php
namespace Plenty\Modules\ItemSet\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\ItemSet\Models\ItemSet;
use Plenty\Modules\RestDocumentation\Annotations\Rest;
use Plenty\Repositories\Models\DeleteResponse;

/**
 * The contract for the item set repository
 */
interface ItemSetRepositoryContract 
{

	/**
	 * Return item set by given id
	 */
	public function show(
		int $id
	):ItemSet;

	/**
	 * Create new item set
	 */
	public function create(
		array $data
	):ItemSet;

	/**
	 * Create new item sets
	 */
	public function createSets(
		array $data
	):ItemSet;

	/**
	 * Update existing item sets
	 */
	public function updateSets(
		array $data
	):array;

	/**
	 * Update item set by given id
	 */
	public function update(
		int $id, 
		array $data
	):ItemSet;

	/**
	 * Delete item sets
	 */
	public function deleteSets(
		array $data
	):DeleteResponse;

	/**
	 * Delete item set config by given id
	 */
	public function delete(
		int $id
	):DeleteResponse;

	/**
	 * Return all item set configs
	 */
	public function all(
	):array;

}