<?php
namespace Plenty\Modules\Item\VariationDescription\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\VariationDescription\Models\VariationDescription;
use Plenty\Repositories\Models\DeleteResponse;

/**
 * Repository for variation descriptions
 */
interface VariationDescriptionRepositoryContract 
{

	/**
	 * Create new description
	 */
	public function create(
		array $data
	):VariationDescription;

	/**
	 * Updates description
	 */
	public function update(
		array $data, 
		int $variationId, 
		string $lang
	):VariationDescription;

	/**
	 * Delete description
	 */
	public function delete(
		int $variationId, 
		string $lang
	):DeleteResponse;

	/**
	 * Find description
	 */
	public function find(
		int $variationId, 
		string $lang
	):VariationDescription;

	/**
	 * Find description
	 */
	public function findById(
		int $id
	):VariationDescription;

	/**
	 * Find descriptions
	 */
	public function findByVariationId(
		int $variationId
	):array;

}