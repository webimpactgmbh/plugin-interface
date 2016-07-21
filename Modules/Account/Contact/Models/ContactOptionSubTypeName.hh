<?hh
namespace Plenty\Modules\Account\Contact\Models;


/**
 * contact options sub type name model
 */
abstract class ContactOptionSubTypeName 
{
	public int $id;
	public int $subTypeId;
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