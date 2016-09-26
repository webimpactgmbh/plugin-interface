<?hh
namespace Plenty\Modules\System\Models;


/**
 * The webstore model
 */
abstract class Webstore 
{
	public int $id;
	public string $name;
	public string $type;
	public string $storeIdentifier;
	public \Plenty\Modules\System\Models\WebstoreConfiguration $configuration;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}