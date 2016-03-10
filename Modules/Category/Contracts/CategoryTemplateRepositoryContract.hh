<?hh
namespace Plenty\Modules\Category\Contracts;interface CategoryTemplateRepositoryContract{
	const string CATEGORY_TPL_PLUGIN_NAME = 'CategoryTemplates';


	public function storeCategoryTemplateContent(
		string $content,
		int $categoryId,
		string $lang,
		int $webstoreId
	):void;
	public function loadCategoryTemplateContent(
		int $categoryId,
		string $lang,
		int $webstoreId
	):string;
}