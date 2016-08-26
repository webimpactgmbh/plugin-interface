<?hh
namespace Plenty\Modules\Item\Property\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Item\Property\Models\PropertySelection;

/**
 * Repository for PropertySelection
 */
interface PropertySelectionRepositoryContract 
{

	public function create(
		array<string> $data, 
		int $propertyItemId
	):PropertySelection;

	public function delete(
		int $propertyItemId, 
		string $lang
	):bool;

	public function update(
		array<string> $data, 
		int $propertyItemId, 
		string $lang
	):PropertySelection;

	public function findOne(
		int $propertyItemId, 
		string $lang
	):PropertySelection;

	public function findByPropertyItemId(
		int $propertyItemId
	):?PropertySelection;

}