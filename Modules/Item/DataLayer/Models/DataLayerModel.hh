<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


abstract class DataLayerModel 
{

	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}