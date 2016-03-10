<?hh
namespace Plenty\Modules\DataExchange\Models;
/**
 * export filter
 */
abstract class Filter{
	public int $id;

	public string $createdAt;

	public string $updatedAt;

	public int $exportId;

	public string $key;

	public string $value;

}