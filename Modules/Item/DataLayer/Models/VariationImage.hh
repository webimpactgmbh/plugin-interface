<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationImage
 */
abstract class VariationImage 
{
	public int $imageId;
	public int $type;
	public string $fileType;
	public string $path;
	public int $position;
	public string $lastUpdateTimestamp;
	public string $createTimestamp;
	public string $cleanImageName;
	public int $attributeValueId;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}