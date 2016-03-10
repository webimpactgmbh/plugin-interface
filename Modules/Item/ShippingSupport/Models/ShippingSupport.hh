<?hh
namespace Plenty\Modules\Item\ShippingSupport\Models;
/**
 * The shipping support model
 */
abstract class ShippingSupport{
	public int $id;

	public int $itemId;

	public int $profileId;

}