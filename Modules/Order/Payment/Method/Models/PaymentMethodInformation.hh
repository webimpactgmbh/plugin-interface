<?hh
namespace Plenty\Modules\Order\Payment\Method\Models;


/**
 * The payment method information model
 */
abstract class PaymentMethodInformation 
{
	public int $id;
	public string $lang;
	public string $name;
	public int $infoPageType;
	public int $infoPageInternalContent;
	public string $infoPageExternalUrl;
	public string $logo;
	public int $showLogo;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}