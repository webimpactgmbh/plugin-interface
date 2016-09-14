<?hh
namespace Plenty\Modules\Item\Attribute\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Attribute\Models\AttributeValueName;

/**
 * Repository for AttributeValueName
 */
interface AttributeValueNameRepositoryContract 
{

	public function create(
		array<string> $data, 
		int $valueId
	):AttributeValueName;

	public function delete(
		int $valueId, 
		string $lang
	):bool;

	public function update(
		array<string> $data, 
		int $valueId, 
		string $lang
	):AttributeValueName;

	public function findOne(
		int $valueId, 
		string $lang
	):AttributeValueName;

	public function findByValueId(
		int $valueId
	):?AttributeValueName;

}