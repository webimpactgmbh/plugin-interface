<?php
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationStockBuffer
 */
abstract class VariationStockBuffer 
{
	public		$stockBuffer;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}