<?hh
namespace Plenty\Modules\Category\Models;
/**
 * Category
 */
abstract class Category{
	public int $id;

	public int $parentCategoryId;

	public int $level;

	public string $type;

	public string $linklist;

	public string $right;

	public string $sitemap;

}