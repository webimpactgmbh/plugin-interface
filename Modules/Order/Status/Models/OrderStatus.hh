<?hh
namespace Plenty\Modules\Order\Status\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * The order status model contains the Id, of an order status. The Id is always a number with four decimal digits. Every status has names in different languages, which are accessible throw the names attribute.
 */
abstract class OrderStatus 
{
	public float $id;
	public bool $nonErasable;
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