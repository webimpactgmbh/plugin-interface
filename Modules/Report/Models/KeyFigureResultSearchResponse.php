<?php
namespace Plenty\Modules\Report\Models;


/**
 * The model represent search result of key figure result search.
 */
abstract class KeyFigureResultSearchResponse 
{
	public		$searchResultList;
	
	/**
	 * Returns this model as an array.
	 */
	public function toArray(
	):array
	{
		return [];
	}

}