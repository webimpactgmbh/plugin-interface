<?hh
namespace Plenty\Modules\Item\ShippingSupport\Contracts;

use Plenty\Modules\Item\ShippingSupport\Models\ShippingSupport;

/**
 * Repository for ShippingSupport
 */
interface ShippingSupportRepositoryContract 
{

	/**
	 * Find one ShippingSupport by Id
	 */
	public function find(
		int $id
	):ShippingSupport;

	public function findByItemId(
		int $itemId
	):array<ShippingSupport>;

	/**
	 * Adds shipping support to article
	 */
	public function create(
		array<string> $data
	):ShippingSupport;

	/**
	 * Remove shipping support to article
	 */
	public function delete(
		int $id
	):array<bool>;

}