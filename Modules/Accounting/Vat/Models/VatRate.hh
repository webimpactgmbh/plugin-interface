<?hh
namespace Plenty\Modules\Accounting\Vat\Models;


/**
 * The vat rate model is always associated with the vat configuration and contains the id, name and vat rate for a vat configuration.
 */
abstract class VatRate 
{
	public int $id;
	public float $vatRate;
	public string $name;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}