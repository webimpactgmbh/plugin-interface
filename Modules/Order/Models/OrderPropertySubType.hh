<?hh
namespace Plenty\Modules\Order\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * The order property sub-type model
 */
abstract class OrderPropertySubType 
{
	public int $id;
	public bool $nonErasable;
	public int $position;
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