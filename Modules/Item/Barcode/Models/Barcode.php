<?php
namespace Plenty\Modules\Item\Barcode\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * The barcode model including barcode referrer
 */
abstract class Barcode 
{
	public		$id;
	public		$name;
	public		$type;
	public		$referrers;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}