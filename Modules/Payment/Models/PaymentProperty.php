<?php
namespace Plenty\Modules\Payment\Models;


/**
 * the payment option
 */
abstract class PaymentProperty 
{
	public		$id;
	public		$paymentId;
	public		$typeId;
	public		$value;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}