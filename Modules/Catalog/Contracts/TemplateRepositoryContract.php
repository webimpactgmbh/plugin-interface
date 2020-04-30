<?php
namespace Plenty\Modules\Catalog\Contracts;


/**
 * To be written
 */
interface TemplateRepositoryContract 
{

	public function getTemplates(
	):array;

	public function getTemplate(
		string $id, 
		string $data
	):array;

	public function getMappings(
		string $id
	):array;

	public function getMapping(
		string $id, 
		string $mappingId
	):array;

	public function getMappingData(
		string $id, 
		string $mappingId, 
		string $parentId
	):array;

	public function getMappingDataById(
		string $id, 
		string $mappingId, 
		string $dataId
	):array;

	public function test(
		string $id
	);

	public function getAllMappings(
		string $id
	):array;

}