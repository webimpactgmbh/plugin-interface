<?hh
namespace Plenty\Modules\Order\Models;


/**
 * The order amount vat model.
 */
abstract class OrderAmountVat 
{
	public int $id;
	public int $orderAmountId;
	public int $countryVatId;
	public int $vatField;
	public float $vatRate;
	public float $value;
	public string $createdAt;
	public string $updatedAt;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}