<?hh
namespace Plenty\Repositories\Contracts;
use Illuminate\Contracts\Support\Arrayable;
use Illuminate\Contracts\Support\Jsonable;
use Illuminate\Database\Eloquent\Collection;
use Illuminate\Database\Eloquent\Model;

/**
 * Pagination interface
 */
interface Pagination{
	public function setPage(
		int $page
	):void;
	public function setResult(
		array<Model> $result
	):void;
	public function applyPagination(
		Model $model,
		int $itemsPerPage,
		array<string> $columns = ["*"]
	):void;
	public function getPage(
	):int;
	public function getTotal(
	):int;
	public function getResult(
	):array<Model>;
}