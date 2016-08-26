<?hh
namespace Plenty\Modules\Order\Models;


/**
 * The order property sub type name model
 */
abstract class OrderPropertySubTypeName 
{
	public int $id;
	public int $subTypeId;
	public string $name;
	public string $lang;
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