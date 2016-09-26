<?hh
namespace Plenty\Modules\Order\Models;


/**
 * price calculation result item
 */
abstract class PriceCalculationResultItem 
{
	public float $total;
	public float $totalNet;
	public float $totalGross;
	public float $totalVat;
	public int $highestVatId;
	public array<float> $netAmountsMap;
	public array<float> $vatAmountsMap;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}