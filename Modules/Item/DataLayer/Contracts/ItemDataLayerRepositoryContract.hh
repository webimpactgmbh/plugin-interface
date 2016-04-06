<?hh
namespace Plenty\Modules\Item\DataLayer\Contracts;

use Plenty\Modules\Item\DataLayer\Models\RecordList;

interface ItemDataLayerRepositoryContract 
{

	public function search(
		array<string, mixed> $columns, 
		?array<string, mixed> $filter = [], 
		?array<string, mixed> $params = []
	):RecordList;

}