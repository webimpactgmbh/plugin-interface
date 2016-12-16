<?php
namespace Plenty\Modules\Item\ItemShippingProfiles\Models;


/**
 * The shipping profile model
 */
abstract class ItemShippingProfiles 
{
	public		$id;
	public		$itemId;
	public		$profileId;
	
	/**
	 * Returns this model as an array.
	 */
	public function toArray(
	):array
	{
		return [];
	}

}