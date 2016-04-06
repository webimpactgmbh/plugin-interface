<?hh
namespace Plenty\Modules\Helper\Contracts;


/**
 * Repository Contract for UrlBuilder
 */
interface UrlBuilderRepositoryContract 
{

	const string SIZE_MIDDLE = 'middle';

	const string SIZE_PREVIEW = 'preview';

	const string SIZE_SECOND_PREVIEW = 'secondPreview';

	const string SIZE_NORMAL = 'normal';

	public function getImageUrl(
		string $path, 
		int $plentyId, 
		string $size = "", 
		string $fileType = "", 
		bool $isExternalImage = false
	):string;

	public function getItemUrl(
		int $itemId, 
		int $plentyId, 
		string $urlContent = "", 
		string $lang = "de", 
		bool $useHttpsDomain = true
	):string;

}