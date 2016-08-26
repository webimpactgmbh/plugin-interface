<?hh
namespace Plenty\Modules\Order\Shipping\Countries\Contracts;

use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Order\Shipping\Countries\Models\Country;

/**
 * Repository for Country
 */
interface CountryRepositoryContract 
{

	public function findIsoCode(
		int $countryId, 
		string $isoCodeType
	):string;

	public function getCountryById(
		int $countryId
	):Country;

	public function getActiveCountriesList(
	):?array<Country>;

	public function getActiveCountryNameMap(
		string $language
	):array<string, string>;

}