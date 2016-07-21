<?hh
namespace Plenty\Modules\Account\Contact\Models;


/**
 * contact type name model
 */
abstract class ContactTypeName 
{
	public int $id;
	public int $typeId;
	public string $lang;
	public string $name;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}