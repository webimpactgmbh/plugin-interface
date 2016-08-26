<?hh
namespace Plenty\Modules\Authentication\Events;

use Plenty\Modules\Account\Contact\Models\Contact;

/**
 * account contact authentication event
 */
abstract class AfterAccountAuthentication 
{

	abstract public function isSuccessful(
	):bool;

	abstract public function getAccountContact(
	):Contact;

}