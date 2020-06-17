<?php
namespace Plenty\Modules\Catalog\Contracts;


/**
 * To be written
 */
interface CatalogContentRepositoryContract 
{

	/**
	 * Get the content of the catalog
	 */
	public function get(
		string $id
	):array;

	/**
	 * Update the content of the catalog
	 */
	public function update(
		string $id, 
		array $data
	):array;

}