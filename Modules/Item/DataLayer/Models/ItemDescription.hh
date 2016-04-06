<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * ItemDescription
 */
abstract class ItemDescription 
{
	public int $itemId;
	public string $characterCache;
	public string $characterCacheXml;
	public int $characterUpdate;
	public string $description;
	public int $id;
	public string $keywords;
	public string $lang;
	public string $metaDescription;
	public string $name1;
	public string $name2;
	public string $name3;
	public string $shortDescription;
	public string $technicalData;
	public string $urlContent;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}