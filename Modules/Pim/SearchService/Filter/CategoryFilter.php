<?php
namespace Plenty\Modules\Pim\SearchService\Filter;

use Illuminate\Contracts\Support\Arrayable;
use Plenty\Modules\Cloud\ElasticSearch\Lib\Query\Statement\Filter\TermFilter;
use Plenty\Modules\Cloud\ElasticSearch\Lib\Query\Statement\Filter\TermsFilter;
use Plenty\Modules\Cloud\ElasticSearch\Lib\Query\Statement\StatementInterface;
use Plenty\Modules\Cloud\ElasticSearch\Lib\Query\Type\Filter\BoolMustFilter;

/**
 * To be written...
 */
abstract class CategoryFilter 
{

	const DEPTH_BRANCH = 'branch';

	const DEPTH_ANY = 'any';

	const KEY_BRANCH = 'branch';

	const KEY_ANY = 'any';

	abstract public function isInAtLeastOneCategory(
		array $categoryIds, 
		string $depth = self::DEPTH_ANY
	):self;

	abstract public static function getPathByDepth(
		string $depth
	):string;

	abstract public function isInEachCategory(
		array $categoryIds, 
		string $depth = self::DEPTH_ANY
	):self;

	abstract public function isInCategory(
		int $categoryId, 
		string $depth = self::DEPTH_ANY
	):self;

	abstract public function isInACategory(
	):self;

	abstract public function toArray(
	):array;

	abstract public function addStatement(
		StatementInterface $statement
	);

	abstract public function addQuery(
		 $statement
	);

}