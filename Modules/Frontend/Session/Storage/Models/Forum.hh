<?hh
namespace Plenty\Modules\Frontend\Session\Storage\Models;


/**
 * session storage model for forum data
 */
abstract class Forum 
{
	public int $forumGroupId;
	public string $forumUsername;
	public array<string> $forumConfig;
	public array<string> $forumPermissions;
	public int $forumLastVisitTime;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}