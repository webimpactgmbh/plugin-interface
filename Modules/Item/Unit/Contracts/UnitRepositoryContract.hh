<?hh
namespace Plenty\Modules\Item\Unit\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Unit\Models\Unit;

/**
 * Repository for Unit
 */
interface UnitRepositoryContract 
{

	public function create(
		array<string> $data
	):Unit;

	public function show(
		int $id
	):Unit;

	public function update(
		array<string> $data, 
		int $id
	):mixed;

	public function delete(
		int $id
	):bool;

	public function findById(
		int $id
	):Unit;

	public function all(
		array<string> $columns = [], 
		int $perPage = 50, 
		int $page = 1
	):array<Unit>;

}