<?hh
namespace Plenty\Modules\Accounting\Models;

use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Order\Shipping\Countries\Models\Country;
use Plenty\Modules\Accounting\Vat\Models\Vat;

/**
 * The Accounting Location model it is always associated with a client and country and contains the vat configuration, which is displayed in the Vat model.
 */
abstract class AccountingLocation 
{
	public int $id;
	public int $countryId;
	public string $name;
	public int $clientId;
	public array<Vat> $vats;
	public Country $country;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}