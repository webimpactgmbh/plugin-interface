<?php
namespace Plenty\Modules\Payment\Method\Models;


/**
 * PaymentMethod
 */
abstract class PaymentMethod 
{
	public		$id;
	public		$pluginKey;
	public		$paymentKey;
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