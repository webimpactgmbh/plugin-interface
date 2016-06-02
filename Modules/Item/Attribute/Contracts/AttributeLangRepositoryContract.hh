<?hh
namespace Plenty\Modules\Item\Attribute\Contracts;

use Plenty\Modules\Item\Attribute\Models\AttributeLang;

/**
 * Repository for AttributeLang
 */
interface AttributeLangRepositoryContract 
{

	public function findAttributeName(
		int $attributeId, 
		?string $lang = "de"
	):?AttributeLang;

}