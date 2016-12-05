<?php
namespace Plenty\Modules\Ticket\Models;


/**
 * The ticket type name model.
 */
abstract class TicketTypeName 
{
	public		$id;
	public		$typeId;
	public		$lang;
	public		$name;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array
	{
		return [];
	}

}