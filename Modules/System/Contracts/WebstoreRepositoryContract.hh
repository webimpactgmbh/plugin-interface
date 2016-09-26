<?hh
namespace Plenty\Modules\System\Contracts;

use Plenty\Modules\System\Models\Webstore;

/**
 * Repository for Webstore
 */
interface WebstoreRepositoryContract 
{

	/**
	 * Shows all webstores
	 */
	public function loadAll(
	):array<Webstore>;

	/**
	 * Shows a preview of all webstores with id and name
	 */
	public function loadAllPreview(
	):array<Webstore>;

	/**
	 * Shows a specific webstore from type plentymarkets
	 */
	public function findByPlentyId(
		int $plentyId
	):Webstore;

	/**
	 * Shows a specific webstore
	 */
	public function findByStoreIdentifier(
		int $storeIdentifier
	):Webstore;

}