<?hh
namespace Plenty\Modules\Item\Producer\Contracts;

use Plenty\Modules\Item\Producer\Models\Producer;
use Plenty\Repositories\Models\PaginatedResult;

/**
 * Repository for item producers
 */
interface ProducerRepositoryContract 
{

	/**
	 * store a new producer
	 */
	public function create(
		array<string, mixed> $data
	):Producer;

	/**
	 * Update an existing producer
	 */
	public function update(
		array<string, mixed> $data, 
		int $producerId
	):Producer;

	/**
	 * Delete a producer by the producer id
	 */
	public function delete(
		int $producerId
	):void;

	/**
	 * Search producers by Filter
	 */
	public function search(
		?array<string, string> $params = [], 
		array<string> $columns = []
	):PaginatedResult;

	/**
	 * Find an existing Producer
	 */
	public function findById(
		int $producerId
	):Producer;

	public function all(
		array<string> $columns = []
	):mixed;

}