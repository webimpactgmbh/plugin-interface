<?hh
namespace Plenty\Modules\Authentication\Contracts;


/**
 * authentication repository
 */
interface ContactAuthenticationRepositoryContract 
{

	public function authenticateWithContactEmail(
		string $contactEmail, 
		string $password
	):void;

	public function authenticateWithContactId(
		int $contactId, 
		string $password
	):void;

	public function logout(
	):void;

}