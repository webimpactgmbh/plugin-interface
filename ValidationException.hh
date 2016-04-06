<?hh
namespace Plenty\Exceptions;

use Illuminate\Support\MessageBag;

class ValidationException extends \Exception 

{
	private ?MessageBag $messageBag = null;
	
	public function getMessageBag(
	):?MessageBag
	{
		return $this->messageBag;
	}

	public function setMessageBag(
		MessageBag $messageBag
	):ValidationException
	{
		$this->messageBag = $messageBag;

		return $this;
	}

}