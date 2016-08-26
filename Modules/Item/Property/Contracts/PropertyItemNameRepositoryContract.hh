<?hh
namespace Plenty\Modules\Item\Property\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Property\Models\PropertyItemName;

/**
 * Repository for Property
 */
interface PropertyItemNameRepositoryContract 
{

	public function create(
		array<string> $data, 
		int $propertyItemId
	):PropertyItemName;

	public function delete(
		int $propertyItemId, 
		string $lang
	):bool;

	public function update(
		array<string> $data, 
		int $propertyItemId, 
		string $lang
	):PropertyItemName;

	public function findOne(
		int $propertyItemId, 
		string $lang
	):PropertyItemName;

	public function findByPropertyItemId(
		int $propertyItemId
	):?PropertyItemName;

}