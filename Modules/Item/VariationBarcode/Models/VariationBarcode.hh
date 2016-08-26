<?hh
namespace Plenty\Modules\Item\VariationBarcode\Models;

use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Item\Barcode\Models\Barcode;

/**
 * Variation Barcode
 */
abstract class VariationBarcode 
{
	public string $code;
	public int $barcodeId;
	public int $variationId;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}