<?hh
namespace Plenty\Modules\Order\Models;


/**
 * The order item type name model.
 */
abstract class OrderItemTypeName 
{
	public int $id;
	public int $typeId;
	public string $name;
	public string $lang;
	public \Plenty\Modules\Order\Models\OrderItemType $type;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}