<?hh
namespace Plenty\Modules\Account\Address\Models;


/**
 * The address options type name model
 */
abstract class AddressOptionTypeName 
{
	public int $id;
	public int $typeId;
	public string $lang;
	public string $name;
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