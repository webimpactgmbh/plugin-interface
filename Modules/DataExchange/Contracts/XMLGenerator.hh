<?hh
namespace Plenty\Modules\DataExchange\Contracts;

use Plenty\Modules\DataExchange\Models\FormatSetting;
use \DOMElement;
use \DOMCdataSection;
use \DOMAttr;
use \DOMText;

/**
 * generator for xml content
 */
abstract class XMLGenerator 
{

	/**
	 * Initializes the xml document and the root element.
	 */
	protected function init(
		string $rootName
	):void
	{
	}

	protected function root(
	):\DOMElement
	{
		return new DOMElement();
	}

	/**
	 * Build the XML.
	 */
	protected function build(
	):void
	{
	}

	/**
	 * Create an XML element.
	 */
	protected function createElement(
		string $name, 
		mixed $value = NULL
	):\DOMElement
	{
		return new DOMElement();
	}

	/**
	 * Create a CDATA section.
	 */
	protected function createCDATASection(
		string $data
	):\DOMCdataSection
	{
		return new DOMCdataSection();
	}

	/**
	 * Create an XML attribute.
	 */
	protected function createAttribute(
		string $name, 
		mixed $value = NULL
	):\DOMAttr
	{
		return new DOMAttr();
	}

	/**
	 * Create new text node.
	 */
	protected function createTextNode(
		string $content
	):\DOMText
	{
		return new DOMText();
	}

	protected function addContent(
		string $content
	):void
	{
	}

	abstract protected function generateContent(
		mixed $resultData, 
		array<FormatSetting> $formatSettings = []
	):void;

}