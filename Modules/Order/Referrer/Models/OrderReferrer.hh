<?hh
namespace Plenty\Modules\Order\Referrer\Models;


/**
 * The order referrer model. An order referrer shows where a purchase was originally made.
 */
abstract class OrderReferrer 
{
	public float $id;
	public bool $editable;
	public string $backendName;
	public string $name;
	public int $orderOwnerId;
	public bool $isFilterable;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}