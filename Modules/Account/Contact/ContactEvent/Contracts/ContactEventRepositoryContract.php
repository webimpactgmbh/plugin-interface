<?php
namespace Plenty\Modules\Account\Contact\ContactEvent\Contracts;

use Plenty\Modules\Account\Contact\ContactEvent\Models\ContactEvent;
use Plenty\Repositories\Models\PaginatedResult;

/**
 * The contract for the contact event repository
 */
interface ContactEventRepositoryContract 
{

	/**
	 * List contact events identified by contact logged in
	 */
	public function listEvents(
		array $columns = [], 
		int $page = 1, 
		int $itemsPerPage = 50
	):PaginatedResult;

}