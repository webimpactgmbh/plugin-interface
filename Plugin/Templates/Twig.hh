<?hh
namespace Plenty\Plugin\Templates;
use App;

/**
 * Twig engine
 */
abstract class Twig{
	/**
	 * Renders a template.
	 */
	abstract public function render(
		string $name,
		array<string, mixed> $context = []
	):string;
	/**
	 * Registers an extension.
	 */
	abstract public function addExtension(
		string $extension
	):void;
}