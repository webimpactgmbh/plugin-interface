<?hh
namespace Plenty\Modules\Account\Address\Models;


/**
 * The address relation type name model.
 */
abstract class AddressRelationTypeName 
{
	public int $id;
	public int $typeId;
	public string $lang;
	public string $name;
	public \Plenty\Modules\Account\Address\Models\AddressRelationType $type;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}