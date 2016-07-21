<?hh
namespace Plenty\Modules\Account\Contact\Models;


/**
 * The contact options model.
 */
abstract class ContactOption 
{
	public int $id;
	public int $contactId;
	public int $typeId;
	public int $subTypeId;
	public string $value;
	public int $priority;
	public string $createdAt;
	public string $updatedAt;
	public \Plenty\Modules\Account\Contact\Models\Contact $contact;
	public \Plenty\Modules\Account\Contact\Models\ContactOptionType $type;
	public \Plenty\Modules\Account\Contact\Models\ContactOptionSubType $subType;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}