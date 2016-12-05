<?php
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * ItemProperty
 */
abstract class ItemProperty 
{
	public		$itemPropertyId;
	public		$propertyId;
	public		$propertyValue;
	public		$propertyValueType;
	public		$isOrderProperty;
	public		$propertyOrderMarkup;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}