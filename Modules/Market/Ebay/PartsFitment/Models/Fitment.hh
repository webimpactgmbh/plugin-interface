<?hh
namespace Plenty\Modules\Market\Ebay\PartsFitment\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * The fitment model. This can contain multiple FitmentItems models.
 */
abstract class Fitment 
{
	public int $id;
	public int $marketId;
	public string $name;
	public int $categoryId;
	public array<\Plenty\Modules\Market\Ebay\PartsFitment\Models\FitmentItem> $items;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}