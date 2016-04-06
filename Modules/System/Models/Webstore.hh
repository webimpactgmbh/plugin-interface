<?hh
namespace Plenty\Modules\System\Models;


/**
 * The webstore model
 */
abstract class Webstore 
{
	public int $plenty_webstore_id;
	public string $plenty_webstore_name;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}