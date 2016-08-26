<?hh
namespace Plenty\Modules\Order\Models;


/**
 * The order item property model.
 */
abstract class OrderItemProperty 
{
	public int $id;
	public int $orderItemId;
	public int $typeId;
	public int $subTypeId;
	public string $value;
	public string $createdAt;
	public string $updatedAt;
	public \Plenty\Modules\Order\Models\OrderItem $orderItem;
	public \Plenty\Modules\Order\Models\OrderPropertyType $type;
	public \Plenty\Modules\Order\Models\OrderPropertySubType $subType;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}