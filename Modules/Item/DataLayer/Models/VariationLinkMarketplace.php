<?php
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationLinkMarketplace
 */
abstract class VariationLinkMarketplace 
{
	public		$created;
	public		$marketplaceId;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}