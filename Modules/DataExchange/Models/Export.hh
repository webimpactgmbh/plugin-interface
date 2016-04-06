<?hh
namespace Plenty\Modules\DataExchange\Models;


/**
 * Export model
 */
abstract class Export 
{
	public int $id;
	public string $name;
	public string $type;
	public int $limit;
	public string $createdAt;
	public string $updatedAt;
	public string $formatKey;
	public string $outputType;
	public array<\Plenty\Modules\DataExchange\Models\Filter> $filters;
	public array<\Plenty\Modules\DataExchange\Models\OutputParam> $outputParams;
	public array<\Plenty\Modules\DataExchange\Models\FormatSetting> $formatSettings;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}