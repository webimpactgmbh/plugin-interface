<?hh
namespace Plenty\Plugin;


/**
 * Service provider for plugins
 */
abstract class ServiceProvider 
{

	/**
	 * Register the service provider.
	 */
	abstract public function register(
	):void;

	public function getApplication(
	):\Plenty\Plugin\Application
	{
		return App::make(Application::class);
	}

}