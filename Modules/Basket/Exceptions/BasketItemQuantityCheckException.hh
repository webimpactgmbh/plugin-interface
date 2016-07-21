<?hh
namespace Plenty\Modules\Basket\Exceptions;


/**
 * Created by ptopczewski, 17.05.16 09:37
Class BasketItemQuantityCheckException
 */
abstract class BasketItemQuantityCheckException extends \Plenty\Modules\Basket\Exceptions\BasketItemCheckException 

{

	/**
	 * minimum quantity not reached
	 */
	const int DID_NOT_REACH_MINIMUM_QUANTITY_FOR_ITEM = 1;

	/**
	 * maximum quantity reached
	 */
	const int DID_REACH_MAXIMUM_QUANTITY_FOR_ITEM = 2;

	/**
	 * minimum quantity not reached
	 */
	const int VARIATION_NOT_FOUND = 1;

	/**
	 * maximum quantity reached
	 */
	const int NOT_ENOUGH_STOCK_FOR_ITEM = 2;

}