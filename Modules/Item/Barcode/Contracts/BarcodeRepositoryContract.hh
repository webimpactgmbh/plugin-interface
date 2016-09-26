<?hh
namespace Plenty\Modules\Item\Barcode\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Barcode\Models\Barcode;
use Plenty\Modules\Item\Barcode\Models\BarcodeLinkReferrer;

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
	):bool;

	/**
	 * Create new barcode
	 */
	public function createBarcode(
		array<string> $data
	):Barcode;

	/**
	 * Update an existing barcode
	 */
	public function updateBarcode(
		array<mixed> $data, 
		int $barcodeId
	):Barcode;

	/**
	 * Delete an barcode by given id. If at least one relation exists, throws an exception.
	 */
	public function deleteBarcode(
		int $barcodeId
	):bool;

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
	):array<Barcode>;

	/**
	 * Get list of barcodes
	 */
	public function allBarcodes(
		array<string> $columns = [], 
		int $perPage = 50, 
		int $page = 1
	):array<Barcode>;

	/**
	 * Create new barcode referrer for given referrer.
	 */
	public function createBarcodeReferrerRelation(
		array<string> $data, 
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
	):?array<Barcode>;

}