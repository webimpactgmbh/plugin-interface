<?hh
namespace Plenty\Modules\Category\Contracts;

use Plenty\Modules\Category\Models\CategoryBranch;

/**
 * Repository Contract for CategoryBranch
 */
interface CategoryBranchRepositoryContract 
{

	public function findCategoryBranch(
		int $categoryId, 
		string $lang = "de", 
		int $webstoreId = 0
	):?CategoryBranch;

}