<?php
namespace Plenty\Modules\Item\VariationBarcode\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\VariationBarcode\Models\VariationBarcode;
use Plenty\Repositories\Models\DeleteResponse;

/**
 * repository for variation barcode
 */
interface VariationBarcodeRepositoryContract 
{

	/**
	 * Show an VariationBarcode by given id.
	 */
	public function show(
		int $barcodeId, 
		int $variationId
	):VariationBarcode;

	/**
	 * Create new VariationBarcode
	 */
	public function create(
		array $data
	):VariationBarcode;

	/**
	 * Update an existing VariationBarcode
	 */
	public function update(
		array $data, 
		int $barcodeId, 
		int $variationId
	):VariationBarcode;

	/**
	 * Delete an VariationBarcode by given variation and barcode id
	 */
	public function delete(
		int $barcodeId, 
		int $variationId
	):DeleteResponse;

	/**
	 * Get list of VariationBarcode by variationId
	 */
	public function findByVariationId(
		int $variationId
	):array;

}