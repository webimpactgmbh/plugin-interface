<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationMarketStatus
 */
abstract class VariationMarketStatus 
{
	public int $id;
	public float $marketId;
	public int $marketAccountId;
	public mixed $initialSku;
	public mixed $sku;
	public int $active;
	public mixed $createdTimestamp;
	public mixed $lastExportTimestamp;
	public mixed $deletedTimestamp;
	public mixed $marketStatus;
	public mixed $additionalInformation;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}