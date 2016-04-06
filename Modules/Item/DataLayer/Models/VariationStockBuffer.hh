<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationStockBuffer
 */
abstract class VariationStockBuffer 
{
	public int $stockBuffer;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}