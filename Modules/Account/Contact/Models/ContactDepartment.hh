<?hh
namespace Plenty\Modules\Account\Contact\Models;


/**
 * contact department model
 */
abstract class ContactDepartment 
{
	public int $id;
	public int $position;
	public array<\Plenty\Modules\Account\Contact\Models\ContactDepartmentName> $names;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}