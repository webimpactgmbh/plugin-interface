<?hh
namespace Plenty\Modules\Item\Attribute\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Attribute\Models\AttributeValue;

/**
 * Repository for AttributeValue
 */
interface AttributeValueRepositoryContract 
{

	public function create(
		array<string> $data
	):AttributeValue;

	public function update(
		array<string> $data, 
		int $id
	):mixed;

	public function delete(
		int $id
	):bool;

	public function findByAttributeId(
		int $attributeId
	):array<AttributeValue>;

	public function findById(
		int $id
	):AttributeValue;

	public function all(
		array<string> $columns = [], 
		int $perPage = 50
	):array<AttributeValue>;

}