<?hh
namespace Plenty\Modules\Item\VariationMarketIdentNumber\Models;


/**
 * Variation Market Ident Number
 */
abstract class VariationMarketIdentNumber 
{
	public int $id;
	public int $variationId;
	public int $countryId;
	public string $type;
	public int $position;
	public string $value;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}