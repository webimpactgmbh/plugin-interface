<?hh
namespace Plenty\Modules\Account\Contact\Models;


/**
 * contact department name model
 */
abstract class ContactDepartmentName 
{
	public int $id;
	public int $departmentId;
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