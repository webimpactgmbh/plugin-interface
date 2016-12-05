<?php
namespace Plenty\Modules\Frontend\Events;


/**
 * Event that gets fired when the selected payment method is changed from the frontend
 */
abstract class FrontendPaymentMethodChanged 
{

	abstract public function getPaymentMethodId(
	);

	abstract public function setPaymentMethodId(
		 $paymentMethodId
	);

}