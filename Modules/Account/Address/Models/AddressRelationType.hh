<?hh
namespace Plenty\Modules\Account\Address\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * The contact address type model
 */
abstract class AddressRelationType 
{
	public int $id;
	public int $position;
	public int $nonErasable;
	public Collection $names;
	public \Plenty\Modules\Account\Address\Models\AddressRelationTypeApplication $application;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}