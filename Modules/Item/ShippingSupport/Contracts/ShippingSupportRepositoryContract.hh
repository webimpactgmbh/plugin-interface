<?hh
namespace Plenty\Modules\Item\ShippingSupport\Contracts;
use Plenty\Modules\Item\ShippingSupport\Models\ShippingSupport;

/**
 * Repository for ShippingSupport
 */
interface ShippingSupportRepositoryContract{
	public function findByItemId(
		int $itemId
	):array<ShippingSupport>;
}