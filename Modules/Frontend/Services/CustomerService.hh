<?hh
namespace Plenty\Modules\Frontend\Services;

use Plenty\Modules\Customers\Models\Customer;

/**
 * Frontend-service for customer information
 */
abstract class CustomerService 
{

	abstract public function getIsCustomerLogedIn(
	):bool;

	abstract public function getCustomerId(
	):int;

}