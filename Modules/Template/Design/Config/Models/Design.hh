<?hh
namespace Plenty\Modules\Template\Design\Config\Models;


/**
 * Design model
 */
abstract class Design 
{
	public string $designName;
	public string $imageDir;
	public bool $export;
	public string $updatedAt;
	public string $createdAt;
	public array<\Plenty\Modules\Template\Design\Config\Models\DesignConfig> $config;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}