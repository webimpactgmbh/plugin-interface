<?hh
namespace Plenty\Modules\Accounting\Vat\Contracts;


/**
 * Repository for Vat
 */
interface VatRepositoryContract 
{

	public function getStandardCountryVat(
	):void;

}