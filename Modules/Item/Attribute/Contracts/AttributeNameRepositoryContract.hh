<?hh
namespace Plenty\Modules\Item\Attribute\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Attribute\Models\AttributeName;

/**
 * Repository for AttributeName
 */
interface AttributeNameRepositoryContract 
{

	public function create(
		array<string> $data, 
		int $attributeId
	):AttributeName;

	public function delete(
		int $attributeId, 
		string $lang
	):bool;

	public function update(
		array<string> $data, 
		int $attributeId, 
		string $lang
	):AttributeName;

	public function findOne(
		int $attributeId, 
		string $lang
	):AttributeName;

	public function findByAttributeId(
		int $attributeId
	):?AttributeName;

}