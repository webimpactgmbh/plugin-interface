<?hh
namespace Plenty\Modules\Order\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * The order property type model. Each order has a type and can have an additional sub-type.
 */
abstract class OrderPropertyType 
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