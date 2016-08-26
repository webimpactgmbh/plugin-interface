<?hh
namespace Plenty\Modules\Accounting\Vat\Contracts;

use Plenty\Modules\Accounting\Vat\Models\Vat;

/**
 * Repository for Vat
 */
interface VatRepositoryContract 
{

	public function getStandardCountryVat(
	):Vat;

	public function getVatId(
		Vat $vat, 
		float $vatPercentage
	):int;

	public function getVatById(
		int $id
	):Vat;

	public function determineCountryVat(
		bool $isRestricted, 
		int $contactCountryId, 
		int $locationId, 
		int $deliveryCountryId = 0, 
		string $taxIdNumber = "", 
		?string $date = null
	):Vat;

}