<?hh
namespace Plenty\Modules\Frontend\Factories;

use Plenty\Modules\Frontend\Services\AgentService;
use Plenty\Modules\Frontend\Services\CustomerService;
use Plenty\Modules\Frontend\Services\SystemService;

/**
 * Frontend-Factory
 */
abstract class FrontendFactory 
{

	abstract public function getAgent(
	):AgentService;

	abstract public function getSystem(
	):SystemService;

	abstract public function getCustomer(
	):CustomerService;

}