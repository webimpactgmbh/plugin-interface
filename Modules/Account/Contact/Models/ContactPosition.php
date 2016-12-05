<?php
namespace Plenty\Modules\Account\Contact\Models;


/**
 * contact position model
 */
abstract class ContactPosition 
{
	public		$id;
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