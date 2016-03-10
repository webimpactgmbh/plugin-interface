<?hh
namespace Plenty\Modules\Helper\Exceptions;
/**
 * Class EncryptionException
 */
abstract class EncryptionException extends \Exception{
	/**
	 * data is empty
	 */
	const int EMPTY_DATA = 1;

	/**
	 * invalid encoding mode
	 */
	const int INVALID_ENCODING_MODE = 2;

}