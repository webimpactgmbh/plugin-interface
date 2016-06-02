<?hh
namespace Plenty\Modules\Frontend\Services;

use Jenssegers\Agent\Agent;

/**
 * Frontend-Service for agent information
 */
abstract class AgentService 
{

	const string DETECTION_TYPE_MOBILE = 'mobile';

	const string DETECTION_TYPE_EXTENDED = 'extended';

	const string VER = '([\w._\+]+)';

	const string MOBILE_GRADE_A = 'A';

	const string MOBILE_GRADE_B = 'B';

	const string MOBILE_GRADE_C = 'C';

	const string VERSION = '2.8.22';

	const string VERSION_TYPE_STRING = 'text';

	const string VERSION_TYPE_FLOAT = 'float';

	abstract public function getLanguages(
	):array<string>;

	abstract public function getBrowser(
	):string;

	abstract public function getPlatform(
	):string;

	abstract public function getDevice(
	):string;

	abstract public function getIsDesktop(
	):bool;

	abstract public function getRobotName(
	):string;

	abstract public function getIsRobot(
	):bool;

	abstract public function getHttpHeaders(
	):array<string, string>;

	abstract public function getIsMobile(
	):bool;

	abstract public function getIsTablet(
	):bool;

}