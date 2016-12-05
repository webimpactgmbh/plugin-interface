<?php
namespace Plenty\Modules\Frontend\Events;


/**
 * Event that gets fired when the selected shipping country is changed from the frontend
 */
abstract class FrontendShippingCountryChanged 
{

	/**
	 * Gets the ID of the shipping country.
	 */
	abstract public function getShippingCountryId(
	):int;

	/**
	 * Sets the ID of the shipping country. The ID must be specified.
	 */
	abstract public function setShippingCountryId(
		int $shippingCountryId
	):\Plenty\Modules\Frontend\Events\FrontendShippingCountryChanged;

}