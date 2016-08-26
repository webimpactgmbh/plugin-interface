<?hh
namespace Plenty\Modules\Item\VariationSalesPrice\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\VariationSalesPrice\Models\VariationSalesPrice;
use Plenty\Repositories\Models\DeleteResponse;

/**
 * Repository for VariationSalesPrice
 */
interface VariationSalesPriceRepositoryContract 
{

	/**
	 * Show an VariationSalesPrice by given id.
	 */
	public function show(
		int $salesPriceId, 
		int $variationId
	):VariationSalesPrice;

	/**
	 * Create new VariationSalesPrice
	 */
	public function create(
		array<string> $data
	):VariationSalesPrice;

	/**
	 * Update an existing VariationSalesPrice
	 */
	public function update(
		array<mixed> $data, 
		int $salesPriceId, 
		int $variationId
	):VariationSalesPrice;

	/**
	 * Delete an VariationSalesPrice by given id. If at least one relation exists, throws an exception.
	 */
	public function delete(
		int $salesPriceId, 
		int $variationId
	):DeleteResponse;

	/**
	 * Find an existing VariationSalesPrice by given id.
	 */
	public function findByVariationId(
		int $variationId
	):VariationSalesPrice;

	/**
	 * Find an existing VariationSalesPrice by given id.
	 */
	public function findByVariationIdWithInheritance(
		int $variationId
	):VariationSalesPrice;

}