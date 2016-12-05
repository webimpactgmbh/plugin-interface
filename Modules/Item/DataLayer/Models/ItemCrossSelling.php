<?php
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * ItemCrossSelling
 */
abstract class ItemCrossSelling 
{
	public		$itemId;
	public		$crossItemId;
	public		$relationship;
	public		$dynamic;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}