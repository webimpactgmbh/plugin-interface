<?php
namespace Plenty\Modules\Payment\Method\Models;


/**
 * The payment method model
 */
abstract class PaymentMethod 
{
	public		$id;
	public		$pluginKey;
	public		$paymentKey;
	public		$name;
	
	/**
	 * Returns this model as an array.
	 */
	public function toArray(
	):array
	{
		return [];
	}

}