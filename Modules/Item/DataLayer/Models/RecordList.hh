<?hh
namespace Plenty\Modules\Item\DataLayer\Models;


/**
 * RecordList
 */
abstract class RecordList implements \KeyedIterator<int, \Plenty\Modules\Item\DataLayer\Models\Record>, \Countable

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