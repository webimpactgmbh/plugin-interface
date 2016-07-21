<?hh
namespace Plenty\Plugin\Templates;


/**
 * view support
 */
abstract class View 
{

	abstract public function render(
		string $templatePath, 
		array<string> $data = []
	):string;

	abstract public function exists(
		string $templatePath
	):bool;

}