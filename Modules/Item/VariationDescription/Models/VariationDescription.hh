<?hh
namespace Plenty\Modules\Item\VariationDescription\Models;


/**
 * Variation Default Category
 */
abstract class VariationDescription 
{
	public int $id;
	public int $itemId;
	public string $lang;
	public string $name;
	public string $name2;
	public string $name3;
	public string $previewDescription;
	public string $metaDescription;
	public string $description;
	public string $technicalData;
	public string $urlPath;
	public string $metaKeywords;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}