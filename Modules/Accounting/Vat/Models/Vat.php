<?php
namespace Plenty\Modules\Accounting\Vat\Models;

use Plenty\Modules\Order\Shipping\Countries\Models\Country;
use Plenty\Modules\Accounting\Models\AccountingLocation;

/**
 * The VAT model contains the complete VAT configuration in plentymarkets. The VAT configuration is based on 4 VAT rates. A VAT configuration always belongs to an accounting location. The accounting location is in specified country and is assigne to a client. One accounting location can have several VAT configurations, but only one is active at a time. Which one is active depends on the startedAt date. This also means that only one VAT number is active per accounting location.
 */
abstract class Vat 
{
	public		$id;
	public		$countryId;
	public		$taxIdNumber;
	public		$startedAt;
	public		$locationId;
	public		$marginScheme;
	public		$isRestrictedToDigitalItems;
	public		$isStandard;
	public		$location;
	public		$country;
	public		$vatRates;
	
	/**
	 * Returns this model as an array.
	 */
	public function toArray(
	):array
	{
		return [];
	}

}