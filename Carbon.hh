<?hh
namespace Carbon;

use Closure;
use DateTime;
use DateTimeZone;
use DatePeriod;
use InvalidArgumentException;
use Symfony\Component\Translation\Translator;
use Symfony\Component\Translation\TranslatorInterface;
use Symfony\Component\Translation\Loader\ArrayLoader;

class Carbon extends \DateTime 

{
	public ?int $year;
	public ?int $yearIso;
	public ?int $month;
	public ?int $day;
	public ?int $hour;
	public ?int $minute;
	public ?int $second;
	public ?int $timestamp;
	public ?\DateTimeZone $timezone;
	public ?\DateTimeZone $tz;
	
}