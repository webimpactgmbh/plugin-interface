<?hh
namespace Plenty\Modules\Order\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * The order item type model.
 */
abstract class OrderItemType 
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