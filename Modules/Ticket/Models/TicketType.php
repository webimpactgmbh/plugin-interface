<?php
namespace Plenty\Modules\Ticket\Models;


/**
 * The ticket type model.
 */
abstract class TicketType 
{
	public		$id;
	public		$position;
	
	/**
	 * Returns this model as an array.
	 */
	public function toArray(
	):array
	{
		return [];
	}

}