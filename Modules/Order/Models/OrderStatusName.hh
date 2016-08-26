<?hh
namespace Plenty\Modules\Order\Models;


/**
 * The order status name model.
 */
abstract class OrderStatusName 
{
	public int $id;
	public float $statusId;
	public string $backendName;
	public string $frontendName;
	public string $lang;
	public int $frontendVisibility;
	public \Plenty\Modules\Order\Models\OrderStatus $status;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}