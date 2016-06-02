<?hh
namespace Plenty\Modules\Template\Design\Config\Models;


/**
 * Design configuration model
 */
abstract class DesignConfig 
{
	public int $webstoreId;
	public int $error404ContentPageId;
	public int $bankContentPageId;
	public int $cancellationRightsContentPageId;
	public int $termsConditionsContentPageId;
	public int $contactContentPageId;
	public int $legalDisclosureContentPageId;
	public int $helpContentPageId;
	public int $itemNotFoundContentPageId;
	public int $paymentMethodsContentPageId;
	public int $privacyPolicyContentPageId;
	public int $shippingContentPageId;
	public int $frontPageContentPageId;
	public int $customerRegistrationPageId;
	public int $orderConfirmationPageId;
	public int $lostPasswordPageId;
	public int $loginPageId;
	public int $logoutPageId;
	public int $typeOfCheckout;
	public int $checkoutStep1PageId;
	public int $checkoutStep2PageId;
	public int $checkoutStep3PageId;
	public int $checkoutStep4PageId;
	public int $checkoutStep5PageId;
	public int $checkoutStep6PageId;
	public int $checkoutStep7PageId;
	public int $checkoutStep8PageId;
	public int $checkoutStep9PageId;
	public int $checkoutStep10PageId;
	public string $pageDesignWebshop;
	public string $pageDesignCheckout;
	public string $pageDesignMyAccount;
	public string $pageDesignBlog;
	public string $pageDesignForum;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}