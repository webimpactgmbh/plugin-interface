<?hh
namespace Plenty\Modules\Item\DataLayer\Models;
/**
 * ItemCrossSelling
 */
abstract class ItemCrossSelling{
	public int $itemId;

	public mixed $crossItemId;

	public mixed $relationship;

	public mixed $dynamic;

}