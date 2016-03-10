<?hh
namespace Plenty\Plugin;
use Illuminate\Support\ServiceProvider as LaravelServiceProvider;

/**
 * Data Exchange service provider
 */
abstract class DataExchangeServiceProvider{
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