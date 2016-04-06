<?hh
namespace Plenty\Modules\Item\Attribute\Models;


/**
 * The Attribute model including AttributeLang
 */
abstract class Attribute 
{
	public int $id;
	public string $backend_name;
	public int $contentpage;
	public int $position;
	public string $markup_percental;
	public string $image_attribute;
	public string $filter_attribute;
	public string $amazon_variation;
	public string $fruugo_attribute;
	public int $pixmania_attribute;
	public int $neckermann_attribute;
	public string $shopperella_variation;
	public string $otto_variation;
	public string $googleproducts_variation;
	public int $neckermann_at_ep_variation;
	public int $neckermann_at_cd_variation;
	public string $global_type;
	public string $view_webshop;
	public int $la_redoute_variation;
	public string $plenty_attribute2_group_attribute;
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