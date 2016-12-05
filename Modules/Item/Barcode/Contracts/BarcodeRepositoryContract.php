<?php
namespace Plenty\Modules\Item\Barcode\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Barcode\Models\Barcode;
use Plenty\Modules\Item\Barcode\Models\BarcodeLinkReferrer;
use Plenty\Repositories\Models\PaginatedResult;

/**
 * Repository for Barcode
 */
interface BarcodeRepositoryContract 
{

	/**
	 * Show an barcode by given id.
	 */
	public function showBarcode(
		int $barcodeId
	):boolean;

	/**
	 * Create new barcode
	 */
	public function createBarcode(
		array $data
	):Barcode;

	/**
	 * Update an existing barcode
	 */
	public function updateBarcode(
		array $data, 
		int $barcodeId
	):Barcode;

	/**
	 * Delete an barcode by given id. If at least one relation exists, throws an exception.
	 */
	public function deleteBarcode(
		int $barcodeId
	):boolean;

	/**
	 * Find an existing barcode by given id.
	 */
	public function findBarcodeById(
		int $barcodeId
	):Barcode;

	/**
	 * Get list of barcodes from type
	 */
	public function findBarcodesByType(
		string $barcodeType, 
		int $perPage = 50
	):array;

	/**
	 * Get list of barcodes
	 */
	public function allBarcodes(
		array $columns = [], 
		int $perPage = 50, 
		int $page = 1
	):PaginatedResult;

	/**
	 * Create new barcode referrer for given referrer.
	 */
	public function createBarcodeReferrerRelation(
		array $data, 
		int $barcodeId
	):BarcodeLinkReferrer;

	/**
	 * Delete existing barcode referrer with given referrer.
	 */
	public function deleteBarcodeReferrerRelation(
		float $referrer, 
		int $barcodeId
	):bool;

	/**
	 * Get barcode referrer with given referrer
	 */
	public function findBarcodesByReferrerRelation(
		float $referrer, 
		int $perPage = 50
	):array;

}