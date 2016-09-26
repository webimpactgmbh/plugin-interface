<?hh
namespace Plenty\Modules\Payment\Models;

use Plenty\Modules\Payment\Method\Models\PaymentMethod;
use Plenty\Modules\Payment\History\Models\PaymentHistory;

/**
 * The payment model
 */
abstract class Payment 
{
	public int $id;
	public float $amount;
	public float $exchangeRatio;
	public int $deleted;
	public int $unaccountable;
	public string $currency;
	public string $type;
	public string $hash;
	public int $origin;
	public string $entryDate;
	public string $importDate;
	public int $status;
	public int $transactionType;
	public int $mopId;
	public \Plenty\Modules\Payment\Models\Payment $parentId;
	public PaymentMethod $paymentMethod;
	public array<PaymentHistory> $history;
	public array<\Plenty\Modules\Payment\Models\PaymentProperty> $property;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}