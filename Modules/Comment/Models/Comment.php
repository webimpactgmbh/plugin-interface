<?php
namespace Plenty\Modules\Comment\Models;


/**
 * The Comment model.
 */
abstract class Comment 
{

	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}