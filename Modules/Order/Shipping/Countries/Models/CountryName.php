<?php
namespace Plenty\Modules\Order\Shipping\Countries\Models;


/**
 * country name
 */
abstract class CountryName 
{
	public		$id;
	public		$language;
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