<?hh
namespace Plenty\Modules\Order\Models;


/**
 * The order properties model. Each order property has a type and can have an additional sub-type.
 */
abstract class OrderProperty 
{
	public int $id;
	public int $orderId;
	public int $typeId;
	public int $subTypeId;
	public string $value;
	public string $createdAt;
	public string $updatedAt;
	public \Plenty\Modules\Order\Models\Order $order;
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