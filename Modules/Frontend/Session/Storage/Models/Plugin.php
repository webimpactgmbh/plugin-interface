<?php
namespace Plenty\Modules\Frontend\Session\Storage\Models;

use Plenty\Modules\Frontend\Session\Storage\Contracts\SessionStorageModel;

/**
 * session storage model for plugins
 */
abstract class Plugin 
{

	abstract public function setValue(
		string $key, 
		 $value
	);

	abstract public function getValue(
		string $key
	);

}