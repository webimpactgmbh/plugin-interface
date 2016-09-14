<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * ItemProperty
 */
abstract class ItemProperty 
{
	public int $itemPropertyId;
	public int $propertyId;
	public mixed $propertyValue;
	public string $propertyValueType;
	public bool $isOrderProperty;
	public float $propertyOrderMarkup;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}