<?hh
namespace Plenty\Modules\Item\Barcode\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * The barcode model including barcode referrer
 */
abstract class Barcode 
{
	public int $id;
	public string $name;
	public string $type;
	public Collection $referrerlinks;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}