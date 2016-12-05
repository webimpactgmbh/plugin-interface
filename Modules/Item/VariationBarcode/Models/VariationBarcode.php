<?php
namespace Plenty\Modules\Item\VariationBarcode\Models;


/**
 * Variation Barcode
 */
abstract class VariationBarcode 
{
	public		$code;
	public		$barcodeId;
	public		$variationId;
	public		$createdAt;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}