<?hh
namespace Plenty\Modules\Shipping\Countries\Contracts;

use Plenty\Modules\Shipping\Countries\Models\Country;

/**
 * Repository for Country
 */
interface CountryRepositoryContract 
{

	public function findIsoCode(
		int $countryId, 
		string $isoCodeType
	):string;

}