<?hh
namespace Plenty\Modules\DataExchange\Contracts;
use Plenty\Modules\DataExchange\Models\FormatSetting;

/**
 * generator for csv content
 */
abstract class CSVGenerator{
	protected function setDelimiter(
		string $delimiter
	):void
	{
	}
	
	protected function setEnclosure(
		string $enclosure
	):void
	{
	}
	
	protected function addCSVContent(
		array<mixed> $data
	):void
	{
	}
	
	protected function addContent(
		string $content
	):void
	{
	}
	
	abstract protected function generateContent(
		mixed $resultData,
		array<FormatSetting> $formatSettings = []
	):void;
}