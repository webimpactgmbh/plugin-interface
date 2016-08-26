<?hh
namespace Plenty\Modules\Item\Variation\Contracts;

use Plenty\Modules\Basket\Models\Basket;
use Plenty\Modules\Item\Variation\Models\Variation;

/**
 * Repository for item basket
 */
interface VariationRepositoryContract 
{

	public function show(
		int $variationId, 
		array<string> $with
	):mixed;

	public function create(
		array<string> $data
	):mixed;

	public function createPrimary(
		array<string> $data
	):mixed;

	/**
	 * Search basket by session
	 */
	public function search(
		array<string> $filter, 
		array<string> $with, 
		array<string> $params
	):array<string>;

	public function delete(
		int $variationId
	):mixed;

	public function findById(
		int $variationId
	):Variation;

	public function findByItemId(
		int $itemId, 
		array<string> $with
	):mixed;

}