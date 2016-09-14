<?hh
namespace Plenty\Modules\Item\Attribute\Models;

use Plenty\Modules\Item\Attribute\Models\AttributeName;
use Plenty\Modules\Item\Attribute\Models\AttributeValue;

/**
 * The Attribute model including AttributeName and AttributeValue
 */
abstract class Attribute 
{
	public int $id;
	public string $backendName;
	public int $position;
	public string $surchargePercental;
	public string $imageAttribute;
	public string $filterAttribute;
	public string $amazonVariation;
	public string $fruugoAttribute;
	public int $pixmaniaAttribute;
	public int $neckermannAttribute;
	public string $shopperellaVariation;
	public string $ottoVariation;
	public string $googleproductsVariation;
	public int $neckermannAtEpVariation;
	public int $neckermannAtCdVariation;
	public string $viewOnlineStore;
	public int $laRedouteVariation;
	public string $groupAttribute;
	public array<AttributeName> $langs;
	public array<AttributeValue> $values;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}