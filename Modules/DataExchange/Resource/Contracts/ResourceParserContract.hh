<?hh
namespace Plenty\Modules\DataExchange\Resource\Contracts;


/**
 * Repository Contract for ResourceParser
 */
interface ResourceParserContract 
{

	public function next(
		mixed $resource, 
		array<string, mixed> $parseOptions
	):?array<string, mixed>;

	public function getParserType(
	):string;

}