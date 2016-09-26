<?hh
namespace Plenty\Modules\Accounting\Vat\Models;

use Plenty\Modules\Order\Shipping\Countries\Models\Country;
use Carbon\Carbon;
use Plenty\Modules\Accounting\Models\AccountingLocation;

/**
 * The Vat model contains the complete vat configuration in plentymarkets. It is always associated with an accounting location of a client and a country.
 */
abstract class Vat 
{
	public int $id;
	public int $countryId;
	public string $vatNumber;
	public Carbon $startDate;
	public string $differential;
	public bool $digitalRestriction;
	public AccountingLocation $location;
	public Country $country;
	public array<\Plenty\Modules\Accounting\Vat\Models\VatRate> $vatRates;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}