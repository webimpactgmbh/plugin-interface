<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * ItemShippingProfiles
 */
abstract class ItemShippingProfiles 
{
	public int $id;
	public string $name;
	public string $backendName;
	public array<string> $tags;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}