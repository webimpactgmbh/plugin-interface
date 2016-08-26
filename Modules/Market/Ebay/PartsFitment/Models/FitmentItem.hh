<?hh
namespace Plenty\Modules\Market\Ebay\PartsFitment\Models;

use Illuminate\Database\Eloquent\Collection;

/**
 * The fitment item model. This belongs to one fitment model and can contain multiple FitmentItemProperty models.
 */
abstract class FitmentItem 
{
	public int $id;
	public int $fitmentId;
	public \Plenty\Modules\Market\Ebay\PartsFitment\Models\Fitment $fitment;
	public array<\Plenty\Modules\Market\Ebay\PartsFitment\Models\FitmentItemProperty> $properties;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}