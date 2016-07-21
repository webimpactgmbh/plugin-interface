<?hh
namespace Plenty\Modules\Account\Contact\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * contact options sub type model
 */
abstract class ContactOptionSubType 
{
	public int $id;
	public int $position;
	public int $nonErasable;
	public Collection $names;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}