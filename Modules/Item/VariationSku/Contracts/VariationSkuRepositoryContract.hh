<?hh
namespace Plenty\Modules\Item\VariationSku\Contracts;

use Plenty\Modules\Item\VariationSku\Models\VariationSku;

/**
 * Repository for VariationSku
 */
interface VariationSkuRepositoryContract 
{

	public function generateSku(
		int $variationId, 
		int $marketId, 
		int $accountId, 
		mixed $sku = NULL, 
		bool $setLastExportedTimestamp = true
	):mixed;

}