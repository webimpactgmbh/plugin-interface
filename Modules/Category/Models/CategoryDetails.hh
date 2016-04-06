<?hh
namespace Plenty\Modules\Category\Models;


/**
 * CategoryDetails
 */
abstract class CategoryDetails 
{
	public int $categoryId;
	public int $webstoreId;
	public string $lang;
	public string $name;
	public string $description;
	public string $description2;
	public string $shortDescription;
	public string $metaKeywords;
	public string $metaDescription;
	public string $nameUrl;
	public string $metaTitle;
	public int $image;
	public int $image2;
	public int $position;
	public string $itemListView;
	public string $singleItemView;
	public string $pageView;
	public bool $fulltext,;
	public string $placeholderTranslation;
	public bool $webTemplateExists;
	public string $metaRobots;
	public string $canonicalLink;
	public ?array<\Plenty\Modules\Category\Models\Category> $children;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}