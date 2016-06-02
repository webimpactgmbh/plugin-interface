<?hh
namespace Plenty\Modules\Document\Models;


/**
 * Document
 */
abstract class Document 
{
	public int $id;
	public string $type;
	public int $number;
	public string $numberWithPrefix;
	public int $directoryId;
	public string $path;
	public int $userId;
	public string $source;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}