<?hh
namespace Plenty\Modules\Order\Currency\Models;


/**
 * The currency name model.
 */
abstract class CurrencyName 
{
	public int $id;
	public string $currency;
	public string $lang;
	public string $name;
	public \Plenty\Modules\Order\Currency\Models\Currency $currencyInstance;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}