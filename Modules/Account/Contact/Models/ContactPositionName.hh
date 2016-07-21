<?hh
namespace Plenty\Modules\Account\Contact\Models;


/**
 * contact position name model
 */
abstract class ContactPositionName 
{
	public int $id;
	public int $positionId;
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