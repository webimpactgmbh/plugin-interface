<?php
namespace Plenty\Modules\BI\KeyFigure\Models;


/**
 * Represents a key figure result
 */
abstract class KeyFigureResult 
{

	const BI_READ_CONNECTION = 'bi-read';

	const BI_WRITE_CONNECTION = 'bi-write';

	const CREATED_AT = 'createdAt';

	const UPDATED_AT = 'updatedAt';
	
public		$id;
	
public		$plentyIdHash;
	
public		$configId;
	
public		$scaleBasis;
	
public		$dimension;
	
public		$interval;
	
public		$primaryResult;
	
public		$furtherResult;
	
public		$calculatedAt;
	
	/**
	 * Returns this model as an array.
	 */
	public function toArray(
	):array
	{
		return [];
	}

}