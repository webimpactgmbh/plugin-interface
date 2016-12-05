<?php
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationImage
 */
abstract class VariationImage 
{
	public		$imageId;
	public		$type;
	public		$fileType;
	public		$path;
	public		$position;
	public		$lastUpdateTimestamp;
	public		$createTimestamp;
	public		$cleanImageName;
	public		$attributeValueId;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}