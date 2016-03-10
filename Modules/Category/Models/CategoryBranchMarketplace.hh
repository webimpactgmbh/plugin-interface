<?hh
namespace Plenty\Modules\Category\Models;
/**
 * The CategoryBranchMarketplace including CategoryBranch
 */
abstract class CategoryBranchMarketplace{
	public int $plenty_category_branch_marketplace_branch_id;

	public int $plenty_category_branch_marketplace_webstore_id;

	public float $plenty_category_branch_marketplace_marketplace_id;

	public float $plenty_category_branch_marketplace_marketplace_sub_id;

	public string $plenty_category_branch_marketplace_delimiter;

	public string $plenty_category_branch_marketplace_value1;

	public string $plenty_category_branch_marketplace_value2;

	public string $plenty_category_branch_marketplace_last_update;

	public \Plenty\Modules\Category\Models\CategoryBranch $branch;

}