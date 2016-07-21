<?hh
namespace Plenty\Modules\Account\Address\Models;


/**
 * The address options model
 */
abstract class AddressOption 
{
	public int $id;
	public int $addressId;
	public int $typeId;
	public string $value;
	public int $position;
	public \Plenty\Modules\Account\Address\Models\Address $address;
	public \Plenty\Modules\Account\Address\Models\AddressOptionType $type;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}