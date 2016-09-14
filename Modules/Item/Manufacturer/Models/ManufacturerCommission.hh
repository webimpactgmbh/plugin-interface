<?hh
namespace Plenty\Modules\Item\Manufacturer\Models;

use Plenty\Modules\Item\Manufacturer\Models\Manufacturer;

/**
 * The item manufacturer commission model
 */
abstract class ManufacturerCommission 
{
	public int $id;
	public int $manufacturerId;
	public int $clientId;
	public float $referrerId;
	public float $commission;
	public Manufacturer $manufacturer;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}