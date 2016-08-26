<?hh
namespace Plenty\Modules\Authentication\Models;


/**
 * User for authentification
 */
abstract class User 
{
	public int $id;
	public mixed $pwd;
	public mixed $pwd_md5;
	public string $password;
	public mixed $user;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}