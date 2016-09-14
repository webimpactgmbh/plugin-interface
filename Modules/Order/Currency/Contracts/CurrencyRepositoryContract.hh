<?hh
namespace Plenty\Modules\Order\Currency\Contracts;

use Illuminate\Database\Eloquent\Collection;
use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Order\Currency\Models\Currency;
use Plenty\Modules\Order\Shipping\Countries\Models\Country;

/**
 * Provides methods for currency data.
 */
interface CurrencyRepositoryContract 
{

	/**
	 * Get the currency instance for the given ISO 4217 code.
	 */
	public function getCurrency(
		string $currencyIso, 
		?array<string> $columns = [], 
		?array<string> $with = []
	):Currency;

	/**
	 * Get all currencies supported in the system.
	 */
	public function getCurrencyList(
		?array<string> $columns = [], 
		?array<string> $with = []
	):array<Currency>;

	/**
	 * Get all countries using the given ISO 4217 currency.
	 */
	public function getCurrencyCountries(
		string $currencyIso, 
		?array<string> $columns = []
	):?array<Country>;

	/**
	 * Get the currency instance for the given country id.
	 */
	public function getCountryCurrency(
		int $countryId, 
		?array<string> $columns = [], 
		?array<string> $with = []
	):Currency;

}