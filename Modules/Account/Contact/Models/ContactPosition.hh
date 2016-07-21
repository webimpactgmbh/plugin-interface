<?hh
namespace Plenty\Modules\Account\Contact\Models;


/**
 * contact position model
 */
abstract class ContactPosition 
{
	public int $id;
	public int $position;
	public array<\Plenty\Modules\Account\Contact\Models\ContactPositionName> $names;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}