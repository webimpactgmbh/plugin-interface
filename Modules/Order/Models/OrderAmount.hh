<?hh
namespace Plenty\Modules\Order\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * The order amount model.
 */
abstract class OrderAmount 
{
	public int $id;
	public int $orderId;
	public bool $isSystemCurrency;
	public bool $isNet;
	public string $currency;
	public float $exchangeRate;
	public float $netTotal;
	public float $grossTotal;
	public float $vatTotal;
	public float $invoiceTotal;
	public float $paidAmount;
	public float $prepaidAmount;
	public string $createdAt;
	public string $updatedAt;
	public \Plenty\Modules\Order\Models\Order $order;
	public Collection $vats;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}