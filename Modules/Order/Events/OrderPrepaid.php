<?php
namespace Plenty\Modules\Order\Events;


/**
 * An Event class fired after a payment assignment when the order is paid in advance.
 */
abstract class OrderPrepaid 
{

	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}