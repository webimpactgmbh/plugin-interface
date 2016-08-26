<?hh
namespace Plenty\Modules\Order\Payment\Method\Models;

use Plenty\Modules\Order\Shipping\Countries\Models\Country;
use Plenty\Modules\System\Models\Webstore;

/**
 * The payment method model
 */
abstract class PaymentMethod 
{
	public int $id;
	public string $name;
	public float $minimumGross;
	public int $priority;
	public bool $active;
	public int $showBankDetails;
	public int $infoPageType;
	public int $infoPageExternalUrl;
	public float $feeDomesticFlatRateWebstore;
	public float $feeDomesticFlatRateInternal;
	public float $feeDomesticPercentageWebstore;
	public float $feeDomesticPercentageInternal;
	public float $feeForeignFlatRateWebstore;
	public float $feeForeignFlatRateInternal;
	public float $feeForeignPercentageWebstore;
	public float $feeForeignPercentageInternal;
	public array<\Plenty\Modules\Order\Payment\Method\Models\PaymentMethodInformation> $informations;
	public array<Webstore> $webstores;
	public array<Country> $coutries;
	public \Plenty\Modules\Order\Payment\Method\Models\PaymentMethodInformation $information;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}