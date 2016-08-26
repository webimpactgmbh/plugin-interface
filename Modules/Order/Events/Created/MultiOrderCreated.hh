<?hh
namespace Plenty\Modules\Order\Events\Created;


/**
 * An event class fired after a new multi order is created.
 */
abstract class MultiOrderCreated 
{

	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}