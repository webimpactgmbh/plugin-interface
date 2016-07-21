<?hh
namespace Plenty\Modules\Account\Address\Models;


/**
 * The address relation type application model
 */
abstract class AddressRelationTypeApplication 
{
	public int $id;
	public int $typeId;
	public string $application;
	public int $position;
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