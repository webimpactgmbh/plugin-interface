<?php
namespace Plenty\Modules\Item\Search\Mutators;

use Plenty\Modules\Cloud\ElasticSearch\Lib\Source\Mutator\NestedMutator;

/**
 * kommt noch
 */
abstract class VariationTextLanguageMutator 
{

	abstract public function getPath(
	):string;

	abstract public function mutateRow(
		array $row, 
		 $key
	):array;

	abstract public function mutate(
		array $data
	):array;

}