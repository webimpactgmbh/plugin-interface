<?hh
namespace Plenty\Modules\Item\DefaultShippingCost\Contracts;


/**
 * Repository for DefaultShippingCost
 */
interface DefaultShippingCostRepositoryContract 
{

	public function findShippingCost(
		int $itemId, 
		float $referrerId, 
		int $shippingDestinationId, 
		int $paymentMethodId
	):float;

}