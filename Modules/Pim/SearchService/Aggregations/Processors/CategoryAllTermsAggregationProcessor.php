<?php
namespace Plenty\Modules\Pim\SearchService\Aggregations\Processors;

use Plenty\Modules\Cloud\ElasticSearch\Lib\Processor\AggregationProcessor;
use Plenty\Modules\Cloud\ElasticSearch\Lib\Processor\ProcessorInterface;
use Plenty\Modules\Cloud\ElasticSearch\Lib\Source\Condition\ConditionInterface;
use Plenty\Modules\Cloud\ElasticSearch\Lib\Source\Mutator\MutatorInterface;
use Plenty\Modules\Pim\SearchService\Aggregations\CategoryAllTermsAggregation;

/**
 * To be written...
 */
abstract class CategoryAllTermsAggregationProcessor 
{

	abstract public function process(
		array $data
	):array;

	abstract public function getName(
	):string;

	abstract public function getDependencies(
	):array;

	abstract public function addMutator(
		MutatorInterface $mutator
	):self;

	abstract public function addCondition(
		ConditionInterface $conditions
	):self;

}