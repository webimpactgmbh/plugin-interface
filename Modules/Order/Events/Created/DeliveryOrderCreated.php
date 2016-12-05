<?php
namespace Plenty\Modules\Order\Events\Created;


/**
 * An event class fired after a new delivery order is created.
 */
abstract class DeliveryOrderCreated 
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