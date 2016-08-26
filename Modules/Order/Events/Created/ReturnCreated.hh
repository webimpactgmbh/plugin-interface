<?hh
namespace Plenty\Modules\Order\Events\Created;


/**
 * An event class fired after a new returns is created.
 */
abstract class ReturnCreated 
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