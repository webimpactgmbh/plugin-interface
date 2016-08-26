<?hh
namespace Plenty\Modules\DataExchange\Resource\Contracts;


/**
 * Repository Contract for ResourceLoader
 */
interface ResourceLoaderContract 
{

	public function getResource(
		array<string, mixed> $sourceOptions
	):mixed;

	public function validateSourceOptions(
		array<string, mixed> $sourceOptions
	):mixed;

	public function getLoaderType(
	):string;

}