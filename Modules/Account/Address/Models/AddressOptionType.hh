<?hh
namespace Plenty\Modules\Account\Address\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * The address options type model
 */
abstract class AddressOptionType 
{
	public int $id;
	public int $position;
	public int $nonErasable;
	public Collection $names;
	public Collection $options;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}