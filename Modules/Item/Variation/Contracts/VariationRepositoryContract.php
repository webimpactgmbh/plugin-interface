<?php
namespace Plenty\Modules\Item\Variation\Contracts;

use Plenty\Modules\Item\Variation\Models\Variation;

/**
 * Repository for item basket
 */
interface VariationRepositoryContract 
{

	public function show(
		int $variationId, 
		array $with, 
		string $lang
	);

	public function create(
		array $data
	);

	public function createPrimary(
		array $data
	);

	public function delete(
		int $variationId
	);

	public function findById(
		int $variationId
	):Variation;

}