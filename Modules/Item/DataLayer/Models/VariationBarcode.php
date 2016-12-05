<?php
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationBarcode
 */
abstract class VariationBarcode 
{
	public		$code;
	public		$createdTimestamp;
	public		$barcodeId;
	public		$barcodeType;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}