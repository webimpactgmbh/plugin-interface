<?hh
namespace Plenty\Modules\Payment\Contracts;

use Plenty\Modules\Payment\Models\PaymentProperty;
use League\Flysystem\Exception;

/**
 * The PaymentPropertyRepositoryContract is the interface for the payment property repository. List, get, create and update payment properties.
 */
interface PaymentPropertyRepositoryContract 
{

	/**
	 * Lists properties.
	 */
	public function all(
	):?array<PaymentProperty>;

	/**
	 * Gets a property. The ID of the payment property must be specified.
	 */
	public function findByPropertyId(
		int $propertyId
	):?array<PaymentProperty>;

	/**
	 * Lists properties of a payment. The ID of the payment must be specified.
	 */
	public function allByPaymentId(
		int $paymentId
	):?array<PaymentProperty>;

	/**
	 * Lists properties of a property type. The ID of the property type must be specified.
	 */
	public function allByTypeId(
		int $typeId
	):?array<PaymentProperty>;

	/**
	 * Lists properties by creation date. The start and the end of the date range must be specified.
	 */
	public function findByCreatedDateInterval(
		string $startDate, 
		string $endDate
	):?array<PaymentProperty>;

	/**
	 * Creates a payment property.
	 */
	public function createProperty(
		mixed $data
	):?PaymentProperty;

	/**
	 * Updates a payment property.
	 */
	public function changeProperty(
		?PaymentProperty $data
	):?PaymentProperty;

}