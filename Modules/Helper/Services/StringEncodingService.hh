<?hh
namespace Plenty\Modules\Helper\Services;
/**
 * Service for encoding strings
 */
abstract class StringEncodingService{
	const string WEBSHOP_ENCODING = 'UTF-8';

	const string ADMIN_ENCODING = 'ISO-8859-1//TRANSLIT';

	const string UTF8_ENCODING = 'UTF-8';

	const string DATABASE_ENCODING = 'UTF-8';

	const string GWT_ENCODING = 'UTF-8';

	const string EXPORT_ENCODING = 'ISO-8859-1//TRANSLIT';

	const string LEGACY_ENCODING = 'ISO-8859-1//TRANSLIT';

	const string EMAIL_ENCODING = 'UTF-8';

	const string PDF_ENCODING = 'UTF-8';

	const string XML_ENCODING = 'UTF-8';


	/**
	 * Method converts a string to self::DATABASE_ENCODING coding
	 */
	abstract public function toDatabase(
		string $sString
	):string;
	/**
	 * Method converts a string to self::EMAIL_ENCODING coding
	 */
	abstract public function toEmail(
		string $sString
	):string;
	/**
	 * Method converts a string to self::WEBSHOP_ENCODING coding
	 */
	abstract public function toWebshop(
		string $sString,
		string $sTargetEncoding = \Plenty\Modules\Helper\Services\StringEncodingService::WEBSHOP_ENCODING
	):string;
	/**
	 * Method converts a string to the sended coding. Default will be self::ADMIN_ENCODING coding used
	 */
	abstract public function toAdmin(
		string $sString,
		string $sTargetEncoding = \Plenty\Modules\Helper\Services\StringEncodingService::ADMIN_ENCODING
	):string;
	/**
	 * Method converts a string to the sended coding
	 */
	abstract public function toGwt(
		string $sString
	):string;
	/**
	 * Method converts a string to the sended coding. Default will be self::EXPORT_ENCODING coding used
	 */
	abstract public function toExport(
		string $sString,
		string $sTargetEncoding = \Plenty\Modules\Helper\Services\StringEncodingService::EXPORT_ENCODING
	):string;
	/**
	 * Method converts a string to self::LEGACY_ENCODING coding
	 */
	abstract public function toLegacy(
		string $sString
	):string;
	/**
	 * Method converts a string to self::PDF_ENCODING coding
	 */
	abstract public function toPDF(
		string $sString,
		string $sTargetEncoding = \Plenty\Modules\Helper\Services\StringEncodingService::PDF_ENCODING
	):string;
	/**
	 * Method converts a string to self::XML_ENCODING coding.
	 */
	abstract public function toXML(
		string $string,
		string $targetEncoding = \Plenty\Modules\Helper\Services\StringEncodingService::XML_ENCODING
	):string;
	/**
	 * Method returns the encoding of one string
	 */
	abstract public function detect_encoding(
		string $sString
	):?string;
	/**
	 * Method converts a multidimensional array to the desired coding
	 */
	abstract public function convertArray(
		array<string> $array,
		string $sTargetEncoding = \Plenty\Modules\Helper\Services\StringEncodingService::UTF8_ENCODING,
		bool $convertKey = false
	):array<string>;
	/**
	 * cut the given text to fit for db insert.
	 */
	abstract public function cutTextForDB(
		string $text,
		int $lenghtIntoDB
	):string;
	/**
	 * Checks whether the given string is valid utf-8.
	 */
	abstract public function isValidUtf8(
		string $string
	):int;
}