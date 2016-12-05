<?php
namespace Plenty\Modules\Account\Contact\Models;


/**
 * contact position name model
 */
abstract class ContactPositionName 
{
	public		$id;
	public		$positionId;
	public		$lang;
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