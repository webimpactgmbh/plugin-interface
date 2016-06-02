<?hh
namespace Plenty\Repositories\Contracts;

use Illuminate\Database\Eloquent\Collection;
use Illuminate\Database\Query\Builder;
use Illuminate\Database\Eloquent\Model;
use Illuminate\Contracts\Support\Jsonable;
use Illuminate\Contracts\Support\Arrayable;

/**
 * Pagination interface
 */
interface Pagination 
{

	public function setPage(
		int $page
	):void;

	public function setResult(
		array<Model> $result
	):void;

	public function getPage(
	):int;

	public function getTotal(
	):int;

	public function getResult(
	):Collection;

}