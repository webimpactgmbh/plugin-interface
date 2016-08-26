<?hh
namespace Plenty\Modules\Accounting\Newsletter\Models;


/**
 * NewsletterEmail
 */
abstract class NewsletterEmail 
{
	public int $id;
	public int $directory;
	public int $customerId;
	public string $forename;
	public string $surname;
	public string $email;
	public string $gender;
	public string $birthday;
	public int $timestamp;
	public string $templateLang;
	public int $confirmedTimestamp;
	public string $confirmAuthString;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}