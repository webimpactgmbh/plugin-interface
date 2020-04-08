<?php
namespace Plenty\Modules\Webshop\Contracts;

use Plenty\Modules\Cloud\Storage\Models\StorageObject;

/**
 * Repository to get information about gift cards and corresponding order items
 */
interface GiftCardRepositoryContract 
{

	/**
	 * Checks if a gift card document has already been created for this order item
	 */
	public function hasGiftCardPdf(
		int $orderId, 
		int $orderItemId, 
		int $campaignCodeOrderId
	):bool;

	/**
	 * Get Information about the gift card
	 */
	public function getGiftCardInformation(
		int $orderItemId
	):array;

}