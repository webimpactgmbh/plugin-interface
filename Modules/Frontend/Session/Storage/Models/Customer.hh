<?hh
namespace Plenty\Modules\Frontend\Session\Storage\Models;


/**
 * session storage model for customer data
 */
abstract class Customer 
{
	public int $deliveryCountryId;
	public bool $showNetPrice;
	public string $ebaySellerAccount;
	public string $accountContactSign;
	public int $accountContactClassId;
	public int $sourceItemWishListAccountContactId;
	public int $sourceItemWishListAccountAddressId;
	public string $salesAgent;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}