<?php
namespace Plenty\Modules\Item\VariationBarcode\Models;

use Plenty\Modules\Item\Barcode\Models\Barcode;

/**
 * Variation Barcode
 */
abstract class VariationBarcode 
{
	public		$code;
	public		$barcodeId;
	public		$variationId;
	public		$createdAt;
	public		$barcode;
	
	/**
	 * Returns this model as an array.
	 */
	public function toArray(
	):array
	{
		return [];
	}

}