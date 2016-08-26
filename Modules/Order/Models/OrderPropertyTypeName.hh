<?hh
namespace Plenty\Modules\Order\Models;


/**
 * The order property type name model.
 */
abstract class OrderPropertyTypeName 
{
	public int $id;
	public int $typeId;
	public string $name;
	public string $lang;
	public \Plenty\Modules\Order\Models\OrderPropertyType $type;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}