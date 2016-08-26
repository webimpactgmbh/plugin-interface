<?hh
namespace Plenty\Modules\Item\Property\Models;


/**
 * The PropertyMarketComponent including PropertyItem
 */
abstract class PropertyMarketComponent 
{
	public int $propertyItemId;
	public int $componentId;
	public float $marketReference;
	public string $externalComponent;
	public \Plenty\Modules\Item\Property\Models\PropertyItem $property;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}