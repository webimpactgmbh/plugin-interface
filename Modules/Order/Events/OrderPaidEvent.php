<?php
namespace Plenty\Modules\Order\Events;


/**
 * A base Event class for all order paid events.
 */
abstract class OrderPaidEvent 
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