<?php
namespace Plenty\Modules\Frontend\Events;


/**
 * Event that gets fired when the selected shipping profile is changed from the frontend
 */
abstract class FrontendShippingProfileChanged 
{

	abstract public function getShippingProfileId(
	);

	abstract public function setShippingProfileId(
		 $shippingProfileId
	);

}