<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * ItemCrossSelling
 */
abstract class ItemCrossSelling 
{
	public int $itemId;
	public mixed $crossItemId;
	public mixed $relationship;
	public mixed $dynamic;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}