<?hh
namespace Plenty\Modules\Order\Events\Created;


/**
 * An event class fired after a new warranty is created.
 */
abstract class WarrantyCreated 
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