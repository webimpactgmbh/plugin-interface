<?hh
namespace Plenty\Modules\Accounting\Vat\Models;

use Plenty\Modules\Order\Shipping\Countries\Models\Country;

/**
 * The Vat model
 */
abstract class Vat 
{
	public int $id;
	public float $vat1;
	public float $vat2;
	public float $vat3;
	public float $vat4;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}