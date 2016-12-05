<?php
namespace Plenty\Modules\Payment\History\Models;


/**
 * the payment history
 */
abstract class PaymentHistory 
{
	public		$Id;
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