<?hh
namespace Plenty\Modules\Item\Attribute\Contracts;
use Plenty\Modules\Item\Attribute\Models\AttributeValueLang;

/**
 * Repository for AttributeValue
 */
interface AttributeValueLangRepositoryContract{
	public function findAttributeValue(
		int $valueId,
		?string $lang = "de"
	):?AttributeValueLang;
}