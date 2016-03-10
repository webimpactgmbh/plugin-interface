<?hh
namespace Plenty\Modules\Category\Models;
/**
 * Category Branch
 */
abstract class CategoryBranch{
	public int $plenty_category_branch_id;

	public int $plenty_category_branch_category1_id;

	public int $plenty_category_branch_category2_id;

	public int $plenty_category_branch_category3_id;

	public int $plenty_category_branch_category4_id;

	public int $plenty_category_branch_category5_id;

	public int $plenty_category_branch_category6_id;

	public array<int> $branch;

	public array<string> $branchName;

	public array<\Plenty\Modules\Category\Models\CategoryBranchMarketplace> $branchMarketplace;

}