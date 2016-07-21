<?hh
namespace Plenty\Modules\Account\Address\Models;

use Plenty\Modules\Order\Scheduler\Models\OrderScheduler;

/**
 * address scheduler relation model
 */
abstract class AddressSchedulerRelation 
{
	public int $id;
	public int $schedulerId;
	public int $typeId;
	public int $addressId;
	public OrderScheduler $scheduler;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}