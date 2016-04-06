<?hh
namespace Plenty\Modules\Item\Attribute\Models;


/**
 * The AttributeValue model including Attribute and AttributeValueLang
 */
abstract class AttributeValue 
{
	public int $id;
	public int $attribute_id;
	public string $backend_name;
	public float $markup;
	public int $position;
	public string $image;
	public string $comment;
	public string $value_match;
	public string $short_name;
	public string $amazon_map;
	public string $neckerman_map;
	public string $otto_map;
	public string $neckermann_at_ep_map;
	public string $neckermann_at_cd_map;
	public string $global_type;
	public string $la_redoute_map;
	public string $tracdelight_map;
	public int $plenty_attribute_value_percentage_distribution;
	public \Plenty\Modules\Item\Attribute\Models\Attribute $attribute;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}