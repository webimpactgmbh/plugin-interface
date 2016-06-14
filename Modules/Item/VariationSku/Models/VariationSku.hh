<?hh
namespace Plenty\Modules\Item\VariationSku\Models;


/**
 * The variationSku model
 */
abstract class VariationSku 
{
	public int $id;
	public int $variationId;
	public float $marketId;
	public int $accountId;
	public mixed $initialSku;
	public mixed $variationSku;
	public int $active;
	public string $createdTimestamp;
	public string $lastExportTimestamp;
	public string $deletedTimestamp;
	public string $status;
	public string $additionalInformation;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}