<?hh
namespace Plenty\Modules\System\Contracts;

use Plenty\Modules\System\Models\Webstore;

/**
 * Repository for Webstore
 */
interface WebstoreRepositoryContract 
{

	public function loadAll(
	):array<Webstore>;

	public function findByPlentyId(
		int $plentyId
	):Webstore;

}