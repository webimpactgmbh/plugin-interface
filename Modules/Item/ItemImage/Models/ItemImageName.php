<?php
namespace Plenty\Modules\Item\ItemImage\Models;


/**
 * ItemImageName
 */
abstract class ItemImageName 
{
	public		$imageId;
	public		$lang;
	public		$name;
	public		$alternate;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}