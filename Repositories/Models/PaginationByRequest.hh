<?hh
namespace Plenty\Repositories\Models;

use Illuminate\Database\Eloquent\Collection;
use Plenty\Repositories\Contracts\Pagination;

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