<?php
namespace Plenty\Modules\Market\Helper\Contracts;


/**
 * The contract for the market attribute helper repository.
 */
interface MarketAttributeHelperRepositoryContract 
{

	/**
	 * Returns the attribute name for the given attribute id
	 */
	public function getAttributeName(
		int $id, 
		string $lang
	):string;

	/**
	 * Returns the attribute value name for the given attribute value id
	 */
	public function getAttributeValueName(
		int $attributeId, 
		int $valueId, 
		string $lang
	):string;

}