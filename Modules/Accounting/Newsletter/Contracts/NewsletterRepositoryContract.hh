<?hh
namespace Plenty\Modules\Accounting\Newsletter\Contracts;


/**
 * Repository for Newsletter
 */
interface NewsletterRepositoryContract 
{

	/**
	 * Add a subscriber to newsletter list
	 */
	public function addToNewsletterList(
		string $email, 
		string $forename = "", 
		string $surname = "", 
		array<int> $emailDirIds = []
	):void;

}