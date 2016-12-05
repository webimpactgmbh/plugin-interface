<?php
namespace Plenty\Modules\Item\ShippingSupport\Models;


/**
 * The shipping support model
 */
abstract class ShippingSupport 
{
	public		$id;
	public		$itemId;
	public		$profileId;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}