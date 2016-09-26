<?hh
namespace Plenty\Modules\Item\Property\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Property\Models\PropertyItem;

/**
 * Repository for property item
 */
interface PropertyItemRepositoryContract 
{

	public function create(
		array<string> $data
	):PropertyItem;

	public function show(
		int $id
	):PropertyItem;

	public function update(
		array<string> $data, 
		int $id
	):mixed;

	public function delete(
		int $id
	):bool;

	public function findById(
		int $id
	):PropertyItem;

	public function all(
		array<string> $columns = [], 
		int $perPage = 50, 
		int $page = 1
	):array<PropertyItem>;

}