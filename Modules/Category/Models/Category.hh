<?hh
namespace Plenty\Modules\Category\Models;


/**
 * Category
 */
abstract class Category 
{
	public int $id;
	public int $parentCategoryId;
	public int $level;
	public string $type;
	public string $linklist;
	public string $right;
	public string $sitemap;
	public array<\Plenty\Modules\Category\Models\CategoryDetails> $details;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}