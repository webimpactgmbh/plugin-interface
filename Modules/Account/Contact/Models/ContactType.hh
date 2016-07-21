<?hh
namespace Plenty\Modules\Account\Contact\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * contact type model
 */
abstract class ContactType 
{
	public int $id;
	public int $position;
	public int $nonErasable;
	public Collection $names;
	public Collection $contacts;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}