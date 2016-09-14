<?hh
namespace Plenty\Modules\Order\Currency\Models;

use Illuminate\Database\Eloquent\Collection;
use Plenty\Modules\Order\Shipping\Countries\Models\Country;

/**
 * The currency model with the related signs and countries
 */
abstract class Currency 
{
	public string $currency;
	public string $htmlCode;
	public string $unicodeSign;
	public bool $active;
	public bool $nonErasable;
	public Collection $countries;
	public Collection $names;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}