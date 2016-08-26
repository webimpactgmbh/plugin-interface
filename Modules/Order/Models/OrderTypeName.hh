<?hh
namespace Plenty\Modules\Order\Models;


/**
 * The order type name model.
 */
abstract class OrderTypeName 
{
	public int $id;
	public int $typeId;
	public string $name;
	public string $lang;
	public \Plenty\Modules\Order\Models\OrderType $type;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}