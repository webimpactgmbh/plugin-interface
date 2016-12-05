<?php
namespace Plenty\Modules\ItemSet\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\ItemSet\Models\ItemSet;
use Plenty\Modules\ItemSet\Models\ItemSetComponent;
use Plenty\Modules\RestDocumentation\Annotations\Rest;
use Plenty\Repositories\Models\DeleteResponse;

/**
 * The contract for the item set component repository
 */
interface ItemSetComponentRepositoryContract 
{

	/**
	 * Return item set component by given id
	 */
	public function show(
		int $id, 
		array $with
	):ItemSetComponent;

	/**
	 * Return item set component by given set id and id
	 */
	public function get(
		int $setId, 
		int $id
	):ItemSetComponent;

	/**
	 * Create a new item set component
	 */
	public function create(
		int $setConfigId, 
		array $data
	):ItemSetComponent;

	/**
	 * Create new item set components
	 */
	public function createComponents(
		int $setId, 
		array $data
	):ItemSetComponent;

	/**
	 * Update item set components
	 */
	public function updateComponents(
		int $setId, 
		array $data
	):ItemSetComponent;

	/**
	 * Update one item set component by given setId and id
	 */
	public function update(
		int $setId, 
		int $id, 
		array $data
	):ItemSetComponent;

	/**
	 * Delete item set components
	 */
	public function deleteComponents(
		int $setId, 
		array $data
	):DeleteResponse;

	/**
	 * Delete item set component by given setId and id
	 */
	public function delete(
		int $setId, 
		int $id
	):DeleteResponse;

	/**
	 * Return all item set components
	 */
	public function all(
	):array;

	public function findBySetId(
		int $setId, 
		array $with
	):array;

	public function findByItemId(
		int $itemId
	):array;

}