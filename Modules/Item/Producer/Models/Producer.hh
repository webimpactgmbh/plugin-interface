<?hh
namespace Plenty\Modules\Item\Producer\Models;


/**
 * The item producer model
 */
abstract class Producer 
{
	public string $name;
	public int $id;
	public string $logo;
	public string $url;
	public int $pixmania_brand_id;
	public int $neckermann_brand_id;
	public string $external_name;
	public int $neckermann_at_ep_brand_id;
	public int $neckermann_at_cd_brand_id;
	public string $street;
	public string $house_no;
	public string $zip;
	public string $city;
	public int $country_id;
	public string $phone_number;
	public string $fax_number;
	public string $email;
	public int $la_redoute_brand_id;
	public string $producer_comment;
	public string $plenty_producer_last_update_timestamp;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}