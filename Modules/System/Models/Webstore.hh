<?hh
namespace Plenty\Modules\System\Models;


/**
 * The webstore model
 */
abstract class Webstore 
{
	public int $id;
	public string $name;
	public string $storeIdentifier;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}