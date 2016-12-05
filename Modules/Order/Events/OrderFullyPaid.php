<?php
namespace Plenty\Modules\Order\Events;


/**
 * An Event class fired after a payment assignment when the order is fully paid.
 */
abstract class OrderFullyPaid 
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