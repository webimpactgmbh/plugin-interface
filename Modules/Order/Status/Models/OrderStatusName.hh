<?hh
namespace Plenty\Modules\Order\Status\Models;


/**
 * The order status name model represents a status name for a given status Id. Every status can be available in many languages, which are.
 */
abstract class OrderStatusName 
{
	public int $id;
	public float $statusId;
	public string $backendName;
	public string $frontendName;
	public string $lang;
	public int $frontendVisibility;
	public \Plenty\Modules\Order\Status\Models\OrderStatus $status;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}