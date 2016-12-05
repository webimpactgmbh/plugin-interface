<?php
namespace Plenty\Modules\Account\Contact\Models;


/**
 * contact department model
 */
abstract class ContactDepartment 
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