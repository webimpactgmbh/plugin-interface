<?php
namespace Plenty\Modules\Ticket\Models;


/**
 * The ticket message topic model.
 */
abstract class TicketMessageTopic 
{
	public		$id;
	public		$position;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}