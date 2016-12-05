<?php
namespace Plenty\Modules\Item\Availability\Models;


/**
 * The item availability lang model
 */
abstract class AvailabilityLanguage 
{
	public		$availabilityId;
	public		$language;
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