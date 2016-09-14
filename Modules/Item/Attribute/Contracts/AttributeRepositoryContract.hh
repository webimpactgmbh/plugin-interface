<?hh
namespace Plenty\Modules\Item\Attribute\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Attribute\Models\Attribute;

/**
 * Repository for Attribute
 */
interface AttributeRepositoryContract 
{

	public function create(
		array<string> $data
	):Attribute;

	public function show(
		int $id
	):Attribute;

	public function update(
		array<string> $data, 
		int $id
	):mixed;

	public function delete(
		int $id
	):bool;

	public function findById(
		int $id
	):Attribute;

	public function all(
		array<string> $columns = [], 
		int $perPage = 50
	):array<Attribute>;

}