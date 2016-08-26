<?hh
namespace Plenty\Modules\StockManagement\Warehouse\Models;

use Plenty\Modules\Account\Address\Models\Address;
use Plenty\Modules\Account\Address\Models\AddressOption;

/**
 * The warehouse model in plentymarkets represents actual warehouses. Every warehouse is identified by an Id. Furthermore a warehouse is described by a name and is always associated with an address. This address may not only contain a physical address information like a street, a house number, a postal code and a town, but also an email address, a telephone number or a fax number.
 */
abstract class Warehouse 
{
	public int $id;
	public string $name;
	public string $note;
	public int $warehouseType;
	public int $onStockAvailability;
	public int $outOfStockAvailability;
	public bool $splitByParcel;
	public string $storageLocationType;
	public int $storageLocationZone;
	public int $warehouseRepairId;
	public bool $inventoryMod;
	public int $logisticsType;
	public Address $address;
	public \Plenty\Modules\StockManagement\Warehouse\Models\Warehouse $repairWarehouse;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}