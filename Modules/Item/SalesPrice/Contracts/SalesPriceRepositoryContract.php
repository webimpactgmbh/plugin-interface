<?php
namespace Plenty\Modules\Item\SalesPrice\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\SalesPrice\Models\SalesPrice;
use Plenty\Repositories\Models\PaginatedResult;

/**
 * sales price
 */
interface SalesPriceRepositoryContract 
{

	/**
	 * Show an VariationSalesPrice by given id.
	 */
	public function show(
		int $salesPriceId
	):SalesPrice;

	/**
	 * Create new VariationSalesPrice
	 */
	public function create(
		array $data
	):SalesPrice;

	/**
	 * Update an existing VariationSalesPrice
	 */
	public function update(
		array $data, 
		int $salesPriceId
	):SalesPrice;

	/**
	 * Delete an VariationSalesPrice by given id. If at least one relation exists, throws an exception.
	 */
	public function delete(
		int $salesPriceId
	):boolean;

	/**
	 * Get list of SalesPrices from type
	 */
	public function findById(
		int $salesPriceId
	):SalesPrice;

	/**
	 * Get list of SalesPrices
	 */
	public function all(
		array $columns = [], 
		int $perPage = 50, 
		int $page = 1
	):PaginatedResult;

}