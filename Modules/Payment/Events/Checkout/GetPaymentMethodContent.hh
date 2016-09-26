<?hh
namespace Plenty\Modules\Payment\Events\Checkout;

use Plenty\Exceptions\ValidationException;

/**
 * after payment method selected event
 */
abstract class GetPaymentMethodContent 
{

	const string RETURN_TYPE_REDIRECT_URL = 'redirectUrl';

	const string RETURN_TYPE_EXTERNAL_CONTENT_URL = 'externalContentUrl';

	const string RETURN_TYPE_HTML = 'htmlContent';

	const string RETURN_TYPE_ERROR = 'errorCode';

	const string RETURN_TYPE_CONTINUE = 'continue';

	abstract public function setMop(
		int $mop
	):GetPaymentMethodContent;

	abstract public function getMop(
	):int;

	abstract public function setType(
		string $type
	):GetPaymentMethodContent;

	abstract public function getType(
	):string;

	abstract public function setValue(
		string $value
	):GetPaymentMethodContent;

	abstract public function getValue(
	):string;

	abstract public function setParams(
		mixed $params
	):GetPaymentMethodContent;

	abstract public function getParams(
	):mixed;

}