<?php
namespace Plenty\Modules\ItemSet\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\ItemSet\Models\ItemSetConfig;
use Plenty\Modules\RestDocumentation\Annotations\Rest;
use Plenty\Repositories\Models\DeleteResponse;

/**
 * The contract for the item set config repository
 */
interface ItemSetConfigRepositoryContract 
{

	/**
	 * Return item set by given id
	 */
	public function show(
		int $id
	):ItemSetConfig;

	/**
	 * Create new item set config
	 */
	public function create(
		array $data
	):ItemSetConfig;

	/**
	 * Update item set config by given id
	 */
	public function update(
		int $id, 
		array $data
	):ItemSetConfig;

	/**
	 * Delete item set config by given id
	 */
	public function delete(
		int $id
	):DeleteResponse;

	/**
	 * Return item set config of item set
	 */
	public function get(
		int $setId, 
		int $setConfigId
	):ItemSetConfig;

	/**
	 * Return set config for item set
	 */
	public function findBySetId(
		int $setId
	):ItemSetConfig;

}