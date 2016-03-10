<?hh
namespace Plenty\Plugin\Templates\Extensions;
use \Twig_Extension as TwigExtension;

/**
 * Twig extension
 */
abstract class Twig_Extension{
	abstract public function getName(
	):string;
}