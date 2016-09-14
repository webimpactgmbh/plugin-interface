<?hh
namespace Plenty\Modules\Order\Currency\Models;

use Plenty\Modules\Order\Shipping\Countries\Models\Country;

/**
 * The model with the currency to country relation.
 */
abstract class CurrencyCountryRelation 
{
	public int $id;
	public string $currency;
	public int $countryId;
	public Country $country;
	public \Plenty\Modules\Order\Currency\Models\Currency $currencyInstance;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}