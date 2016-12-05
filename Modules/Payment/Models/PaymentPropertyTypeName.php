<?php
namespace Plenty\Modules\Payment\Models;


/**
 * payment property type name model
 */
abstract class PaymentPropertyTypeName 
{
	public		$id;
	public		$typeId;
	public		$lang;
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