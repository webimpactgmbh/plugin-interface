<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationBarcode
 */
abstract class VariationBarcode 
{
	public int $code;
	public string $createdTimestamp;
	public int $barcodeId;
	public string $barcodeType;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}