<?hh
namespace Plenty\Modules\Market\Ebay\PartsFitment\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * The fitment item property model. This bleongs to an FitmentItem model.
 */
abstract class FitmentItemProperty 
{
	public int $id;
	public int $fitmentItemId;
	public string $name;
	public string $value;
	public \Plenty\Modules\Market\Ebay\PartsFitment\Models\FitmentItem $fitmentItem;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}