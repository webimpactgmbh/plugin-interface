<?hh
namespace Plenty\Modules\Item\Barcode\Models;


/**
 * The barcode link referrer model including the barcode
 */
abstract class BarcodeLinkReferrer 
{
	public int $barcodeId;
	public float $referrerId;
	public string $createdAt;
	public string $updatedAt;
	public \Plenty\Modules\Item\Barcode\Models\Barcode $barcode;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}