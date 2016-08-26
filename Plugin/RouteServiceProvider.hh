<?hh
namespace Plenty\Plugin;


/**
 * Route service provider
 */
abstract class RouteServiceProvider 
{

	public function getApplication(
	):\Plenty\Plugin\Application
	{
		return App::make(Application::class);
	}

	public function getEventDispatcher(
	):\Plenty\Plugin\Events\Dispatcher
	{
		return App::make(Dispatcher::class);
	}

}