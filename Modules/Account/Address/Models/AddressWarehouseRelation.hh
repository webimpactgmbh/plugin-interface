<?hh
namespace Plenty\Modules\Account\Address\Models;


/**
 * address warehouse relation model
 */
abstract class AddressWarehouseRelation 
{
	public int $id;
	public int $warehouseId;
	public int $typeId;
	public int $addressId;
	public \Plenty\Modules\Account\Address\Models\Address $address;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}