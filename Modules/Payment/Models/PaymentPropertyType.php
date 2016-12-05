<?php
namespace Plenty\Modules\Payment\Models;


/**
 * payment propery type model
 */
abstract class PaymentPropertyType 
{
	public		$id;
	public		$erasable;
	public		$position;
	public		$name;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}