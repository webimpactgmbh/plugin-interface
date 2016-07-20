<?hh
namespace Plenty\Modules\DataExchange\Contracts;

use Plenty\Modules\DataExchange\Models\FormatSetting;

/**
 * ResultFields
 */
abstract class ResultFields 
{

	abstract public function generateResultFields(
		array<FormatSetting> $formatSettings = []
	):array<string, mixed>;

	protected function setGroupByList(
		array<string> $groupByList
	):void
	{
	}

	protected function setOrderByList(
		array<string, string> $orderByList
	):void
	{
	}

}