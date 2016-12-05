<?php
namespace Plenty\Modules\Order\Models;


/**
 * The order item type name model.
 */
abstract class OrderItemTypeName 
{
	public		$id;
	public		$typeId;
	public		$name;
	public		$lang;
	public		$type;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}