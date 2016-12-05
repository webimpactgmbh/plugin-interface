<?php
namespace Plenty\Modules\Order\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * The order type model.
 */
abstract class OrderType 
{
	public		$id;
	public		$isErasable;
	public		$position;
	public		$names;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}