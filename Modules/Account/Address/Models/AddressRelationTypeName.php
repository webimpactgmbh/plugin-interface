<?php
namespace Plenty\Modules\Account\Address\Models;


/**
 * The address relation type name model.
 */
abstract class AddressRelationTypeName 
{
	public		$id;
	public		$typeId;
	public		$lang;
	public		$name;
	public		$type;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}