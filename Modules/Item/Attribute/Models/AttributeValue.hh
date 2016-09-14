<?hh
namespace Plenty\Modules\Item\Attribute\Models;

use Plenty\Modules\Item\Attribute\Models\Attribute;
use Plenty\Modules\Item\Attribute\Models\AttributeValueName;

/**
 * The AttributeValue model including Attribute and AttributeValueName
 */
abstract class AttributeValue 
{
	public int $id;
	public int $attributeId;
	public string $backendName;
	public float $surcharge;
	public int $position;
	public string $image;
	public string $comment;
	public string $valueMatch;
	public string $shortName;
	public string $amazonMap;
	public string $neckermannMap;
	public string $ottoMap;
	public string $neckermannAtEpMap;
	public string $neckermannAtCdMap;
	public string $laRedouteMap;
	public string $tracdelightMap;
	public int $percentageDistribution;
	public Attribute $attribute;
	public array<AttributeValueName> $valueNames;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}