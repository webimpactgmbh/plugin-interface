<?hh
namespace Plenty\Modules\Item\Item\Contracts;

use Plenty\Modules\Basket\Models\Basket;

/**
 * Repository for item basket
 */
interface ItemRepositoryContract 
{

	public function add(
		array<string> $data
	):mixed;

	/**
	 * Search basket by session
	 */
	public function search(
		array<string> $with, 
		array<string> $filter, 
		array<string> $params
	):Basket;

	public function findById(
		int $itemId
	):mixed;

	public function show(
		int $itemId, 
		array<string> $with, 
		array<string> $filter = [], 
		array<string> $params = []
	):mixed;

}