<?php
namespace Plenty\Plugin;


/**
 * Route service provider
 */
abstract class RouteServiceProvider 
{

	public function getApplication(
	):\Plenty\Plugin\Application
	{
		return null;
	}

	public function getEventDispatcher(
	):\Plenty\Plugin\Events\Dispatcher
	{
		return null;
	}

}