<?hh
namespace Plenty\Modules\DataExchange\Contracts;
use Plenty\Modules\DataExchange\Models\FormatSetting;

/**
 * Generator
 */
abstract class Generator{
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