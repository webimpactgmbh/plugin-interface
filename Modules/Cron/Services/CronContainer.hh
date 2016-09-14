<?hh
namespace Plenty\Modules\Cron\Services;

use Plenty\Modules\Cron\Models\Cron;
use Plenty\Modules\Cron\Validators\CronValidator;

/**
 * Register cron jobs
 */
abstract class CronContainer 
{

	const int EVERY_FIFTEEN_MINUTES = 15;

	const int EVERY_TWENTY_MINUTES = 20;

	const int HOURLY = 60;

	const int DAILY = 3600;

	/**
	 * Use this method to add a handler class and a schedule time for your desired cron event. The action will then be triggered according to the given schedule.
	 */
	abstract public function add(
		int $schedule, 
		string $handlerClass
	):void;

}