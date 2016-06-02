<?hh
namespace Plenty\Modules\Template\Design\Config\Contracts;

use Plenty\Modules\Template\Design\Config\Models\Design;
use Plenty\Modules\Template\Design\Config\Models\DesignConfig;

/**
 * DesignConfig
 */
interface DesignConfigRepositoryContract 
{

	public function findByDesignName(
		string $designName
	):array<DesignConfig>;

	public function findByDesignAndWebStore(
		string $designName, 
		int $webStoreId = 0
	):DesignConfig;

	public function findByDesign(
		Design $design
	):array<DesignConfig>;

	public function update(
		array<string, mixed> $data, 
		string $designName, 
		int $webstoreId
	):DesignConfig;

	public function copyDesignConfig(
		string $designName, 
		string $newDesignName
	):DesignConfig;

}