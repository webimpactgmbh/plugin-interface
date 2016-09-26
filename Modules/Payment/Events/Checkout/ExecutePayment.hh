<?hh
namespace Plenty\Modules\Payment\Events\Checkout;

use Plenty\Modules\Order\Models\Order;

/**
 * execute payment event
 */
abstract class ExecutePayment 
{

	abstract public function setOrderId(
		int $orderId
	):ExecutePayment;

	abstract public function getOrderId(
	):int;

	abstract public function setMop(
		int $mop
	):ExecutePayment;

	abstract public function getMop(
	):int;

	abstract public function setType(
		string $type
	):ExecutePayment;

	abstract public function getType(
	):string;

	abstract public function setValue(
		string $value
	):ExecutePayment;

	abstract public function getValue(
	):string;

}