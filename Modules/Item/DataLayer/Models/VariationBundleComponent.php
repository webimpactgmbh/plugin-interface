<?php
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationBundleComponent
 */
abstract class VariationBundleComponent 
{
	public		$componentVariationId;
	public		$componentQuantity;
	public		$CreatedTimestamp;
	public		$LastUpdateTimestamp;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}