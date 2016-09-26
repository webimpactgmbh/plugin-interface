<?hh
namespace Plenty\Modules\Payment\Models;


/**
 * payment propery type model
 */
abstract class PaymentPropertyType 
{
	public int $id;
	public int $erasable;
	public int $position;
	public \Plenty\Modules\Payment\Models\PaymentPropertyTypeName $name;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}