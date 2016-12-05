<?php
namespace Plenty\Modules\Payment\Models;


/**
 * payment order relation model
 */
abstract class PaymentOrderRelation 
{
	public		$id;
	public		$paymentId;
	public		$orderId;
	public		$assignedAt;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}