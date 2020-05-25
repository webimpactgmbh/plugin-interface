<?php
namespace Plenty\Modules\Payment\Method\Contracts;


/**
 * The payment method container
 */
interface PaymentMethodContainer 
{

	public function register(
		string $paymentKey, 
		 $paymentMethodServiceClass, 
		array $rebuildEventClassesList
	);

	public function isRegistered(
		string $paymentKey
	):bool;

}