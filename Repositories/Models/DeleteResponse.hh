<?hh
namespace Plenty\Repositories\Models;


/**
 * Delete Response
 */
abstract class DeleteResponse 
{
	public int $affectedRows;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}