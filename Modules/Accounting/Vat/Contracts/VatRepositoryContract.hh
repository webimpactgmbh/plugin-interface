<?hh
namespace Plenty\Modules\Accounting\Vat\Contracts;

use Plenty\Modules\Accounting\Vat\Models\Vat;

/**
 * The VatRepositoryContract is the interface for the Vat functionality. This interface allows you to get the vat configuration for an accounting location and a country.
 */
interface VatRepositoryContract 
{

	/**
	 * Returns the Vat configuration for the standard country
	 */
	public function getStandardCountryVat(
		?int $plentyId = null
	):Vat;

	/**
	 * Get Vat configuration
	 */
	public function findVatByLocationId(
		int $locationId, 
		array<string> $relations = [], 
		array<string> $columns = []
	):array<Vat>;

	/**
	 * Get vat configuration for one country
	 */
	public function findVatByLocationIdAndCountry(
		int $locationId, 
		int $countryId, 
		array<string> $relations = [], 
		array<string> $columns = []
	):Vat;

	/**
	 * Get vat id
	 */
	public function getVatId(
		Vat $vat, 
		float $vatPercentage
	):int;

	public function determineCountryVat(
		bool $isRestricted, 
		int $contactCountryId, 
		int $locationId, 
		int $deliveryCountryId = 0, 
		string $taxIdNumber = "", 
		?string $date = null
	):Vat;

}