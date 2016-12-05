<?php
namespace Plenty\Modules\Frontend\Session\Storage\Contracts;

use Plenty\Modules\Frontend\Session\Storage\Models\Customer;
use Plenty\Modules\Frontend\Session\Storage\Models\Forum;
use Plenty\Modules\Frontend\Session\Storage\Models\LocaleSettings;
use Plenty\Modules\Frontend\Session\Storage\Models\Order;
use Plenty\Modules\Frontend\Session\Storage\Models\Plugin;

/**
 * session storage for frontend
 */
interface FrontendSessionStorageFactoryContract 
{

	public function getLocaleSettings(
	):LocaleSettings;

	public function getCustomer(
	):Customer;

	public function getOrder(
	):Order;

	public function getPlugin(
	):Plugin;

	public function getForum(
	):Forum;

}