<?hh
namespace Plenty\Modules\Payment\Models;


/**
 * payment property type name model
 */
abstract class PaymentPropertyTypeName 
{
	public int $id;
	public int $typeId;
	public string $lang;
	public string $name;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}