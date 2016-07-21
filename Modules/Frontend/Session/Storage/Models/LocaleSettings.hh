<?hh
namespace Plenty\Modules\Frontend\Session\Storage\Models;


/**
 * session storage model for locale settings
 */
abstract class LocaleSettings 
{
	public string $currency;
	public float $currencyExchange;
	public string $language;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}