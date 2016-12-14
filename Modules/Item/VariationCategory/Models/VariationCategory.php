<?php
namespace Plenty\Modules\Item\VariationCategory\Models;

use Plenty\Modules\Category\Models\Category;

/**
 * Variation Category
 */
abstract class VariationCategory 
{
	public		$variationId;
	public		$categoryId;
	public		$position;
	public		$isNeckermannPrimary;
	
	/**
	 * Returns this model as an array.
	 */
	public function toArray(
	):array
	{
		return [];
	}

}