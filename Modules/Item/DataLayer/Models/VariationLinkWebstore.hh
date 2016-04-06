<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * VariationLinkWebstore
 */
abstract class VariationLinkWebstore 
{
	public string $created;
	public int $plentyId;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}