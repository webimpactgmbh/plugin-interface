<?php
namespace Plenty\Modules\Order\Property\Models;


/**
 * The OrderPropertyType model. Each order property must have a property type. An order can have one property of each property type. The default property types provided by plentymarkets are listed here.
 */
abstract class OrderPropertyType 
{
	public		$id;
	public		$isErasable;
	public		$position;
	public		$names;
	
	/**
	 * Returns this model as an array.
	 */
	public function toArray(
	):array
	{
		return [];
	}

}