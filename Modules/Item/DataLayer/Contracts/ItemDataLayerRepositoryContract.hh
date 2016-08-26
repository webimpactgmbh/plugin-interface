<?hh
namespace Plenty\Modules\Item\DataLayer\Contracts;

use Plenty\Modules\Item\DataLayer\Models\RecordList;
use Plenty\Repositories\Models\PaginatedResult;

interface ItemDataLayerRepositoryContract 
{

	public function search(
		array<string, mixed> $columns, 
		?array<string, mixed> $filter = [], 
		?array<string, mixed> $params = []
	):RecordList;

	public function searchWithPagination(
		array<string, mixed> $columns, 
		?array<string, mixed> $filter = [], 
		?array<string, mixed> $params = []
	):PaginatedResult;

}