<?hh
namespace Plenty\Modules\Item\Property\Models;


/**
 * The PropertyItem including PropertyItemName and PropertyMarketComponent
 */
abstract class PropertyItem 
{
	public int $id;
	public int $position;
	public string $unit;
	public int $propertyGroupId;
	public string $imageName;
	public string $backendName;
	public string $valueType;
	public string $searchable;
	public string $orderProperty;
	public string $showItem;
	public string $showItemList;
	public string $displayCheckout;
	public string $displayPdf;
	public string $backendNote;
	public float $surcharge;
	public string $displayAsAdditionalCosts;
	public array<\Plenty\Modules\Item\Property\Models\PropertyItemName> $names;
	public array<\Plenty\Modules\Item\Property\Models\PropertyMarketComponent> $marketComponents;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}