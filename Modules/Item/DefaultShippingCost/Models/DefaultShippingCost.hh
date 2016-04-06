<?hh
namespace Plenty\Modules\Item\DefaultShippingCost\Models;


/**
 * The default shipping cost model
 */
abstract class DefaultShippingCost 
{
	public int $id;
	public int $itemId;
	public int $profileId;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}