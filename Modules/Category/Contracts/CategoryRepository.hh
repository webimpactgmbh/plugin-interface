<?hh
namespace Plenty\Modules\Category\Contracts;

use Plenty\Modules\Category\Models\Category;

/**
 * Repository for categories
 */
interface CategoryRepository 
{

	/**
	 * Return all categories.
	 */
	public function all(
		?string $lang = "de"
	):?array<Category>;

	/**
	 * Returns one category by id.
	 */
	public function get(
		int $categoryId, 
		?string $lang = "de"
	):?Category;

	/**
	 * Returns all categories of given type.
	 */
	public function getByType(
		string $type, 
		?string $lang = "de"
	):array<Category>;

	/**
	 * Returns true if category has children.
	 */
	public function hasChildren(
		int $categoryId, 
		bool $onlySitemaps = false
	):bool;

	/**
	 * Returns children of the category.
	 */
	public function getChildren(
		int $categoryId, 
		?string $lang = "de"
	):array<Category>;

	/**
	 * Returns all sitemap categories as list.
	 */
	public function getSitemapList(
		?string $type = "all", 
		?string $lang = "de"
	):array<Category>;

	/**
	 * Returns all sitemap categories as tree.
	 */
	public function getSitemapTree(
		?string $type = "all", 
		?string $lang = "de"
	):array<Category>;

	/**
	 * Retrieves the url for a category.
	 */
	public function getUrl(
		int $categoryId, 
		?string $lang = "de"
	):string;

	/**
	 * Get the category by url.
	 */
	public function findCategoryByUrl(
		string $level1, 
		?string $level2 = NULL, 
		?string $level3 = NULL, 
		?string $level4 = NULL, 
		?string $level5 = NULL, 
		?string $level6 = NULL
	):?Category;

	/**
	 * Get the parent of the category-id given.
	 */
	public function getParent(
		int $categoryId, 
		?string $lang = "de"
	):Category;

	/**
	 * Returns if the category with categoryId has a parent.
	 */
	public function hasParent(
		int $categoryId
	):bool;

}