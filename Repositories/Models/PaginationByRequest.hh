<?hh
namespace Plenty\Repositories\Models;

use Plenty\Repositories\Contracts\Pagination;
use Illuminate\Database\Eloquent\Collection;

/**
 * PaginationByRequest
 */
abstract class PaginationByRequest 
{

	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}