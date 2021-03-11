<?php
namespace Plenty\Modules\BI\RawData\Models;


/**
 * The BI raw data config model
 */
abstract class RawDataConfig 
{

	const BI_READ_CONNECTION = 'bi-read';

	const BI_WRITE_CONNECTION = 'bi-write';

	const CREATED_AT = 'createdAt';

	const UPDATED_AT = 'updatedAt';
	
public		$id;
	
public		$plentyIdHash;
	
public		$dataName;
	
public		$active;
	
	/**
	 * Returns this model as an array.
	 */
	public function toArray(
	):array
	{
		return [];
	}

}