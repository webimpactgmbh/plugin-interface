<?php
namespace Plenty\Modules\Frontend\PaymentMethod\Contracts;

use Illuminate\Support\Collection;
use Plenty\Modules\Payment\Method\Models\PaymentMethod;

/**
 * Repository to load payment methods for the front end
 */
interface FrontendPaymentMethodRepositoryContract 
{

	public function getCurrentPaymentMethodsList(
	):array;

	public function getPaymentMethodName(
		PaymentMethod $paymentMethod, 
		string $lang
	):string;

	public function getPaymentMethodFee(
		PaymentMethod $paymentMethod
	):float;

	public function getPaymentMethodIcon(
		PaymentMethod $paymentMethod, 
		string $lang
	):string;

	public function getPaymentMethodDescription(
		PaymentMethod $paymentMethod, 
		string $lang
	):string;

	public function getPaymentMethodNameById(
		int $paymentMethodId, 
		string $lang
	):string;

	public function getPaymentMethodFeeById(
		int $paymentMethodId
	):float;

	public function getPaymentMethodIconById(
		int $paymentMethodId, 
		string $lang
	):string;

	public function getPaymentMethodDescriptionById(
		int $paymentMethodId, 
		string $lang
	):string;

}