<?hh
namespace Plenty\Modules\Payment\Contracts;

use Illuminate\Database\Eloquent\ModelNotFoundException;
use Plenty\Modules\Payment\Models\PaymentPropertyType;

/**
 * The PaymentPropertyTypeRepositoryContract is the interface for the payment property type repository. List, get, create and update payment properties.
 */
interface PaymentPropertyTypeRepositoryContract 
{

	/**
	 * Lists payment property types. The language of the property type must be specified.
	 */
	public function allTypes(
		string $lang
	):?array<PaymentPropertyType>;

	/**
	 * Gets a payment property type. The ID of the property type must be specified.
	 */
	public function findTypesById(
		int $id, 
		string $lang
	):?array<PaymentPropertyType>;

	/**
	 * Creates a payment property type.
	 */
	public function createType(
		mixed $data
	):?PaymentPropertyType;

	/**
	 * Updates a payment property type.
	 */
	public function changeProperty(
		mixed $data
	):?PaymentPropertyType;

}