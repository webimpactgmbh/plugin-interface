<?hh
namespace Plenty\Modules\Payment\Contracts;

use Plenty\Modules\Payment\Models\PaymentOrderRelation;
use League\Flysystem\Exception;
use Plenty\Modules\Order\Models\Order;
use Plenty\Modules\Payment\Models\Payment;
use Illuminate\Database\Eloquent\ModelNotFoundException;

/**
 * payment order relation
 */
interface PaymentOrderRelationRepositoryContract 
{

	/**
	 * Creates a payment order relation.
	 */
	public function createOrderRelation(
		Payment $payment, 
		Order $order
	):bool;

	/**
	 * Deletes a payment order relation.
	 */
	public function deleteOrderRelation(
		Payment $payment, 
		Order $order
	):bool;

}