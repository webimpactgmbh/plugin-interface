<?php
namespace Plenty\Modules\Cloud\ElasticSearch\Lib\Data\Document;

use Illuminate\Contracts\Support\Arrayable;

/**
 * to be written
 */
interface DocumentInterface 
{

	/**
	 * Get the instance as an array.
	 */
	public function toArray(
	):array;

}