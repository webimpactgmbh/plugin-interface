<?hh
namespace Plenty\Modules\Account\Contact\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * contact options type model
 */
abstract class ContactOptionType 
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