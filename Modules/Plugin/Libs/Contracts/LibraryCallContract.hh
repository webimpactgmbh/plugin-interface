<?hh
namespace Plenty\Modules\Plugin\Libs\Contracts;


/**
 * library call
 */
interface LibraryCallContract 
{

	public function call(
		string $libCall, 
		array<string, mixed> $params = []
	):?array<string, mixed>;

}