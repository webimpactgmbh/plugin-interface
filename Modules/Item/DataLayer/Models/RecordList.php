<?php
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * RecordList
 */
abstract class RecordList implements \Iterator, \Countable

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