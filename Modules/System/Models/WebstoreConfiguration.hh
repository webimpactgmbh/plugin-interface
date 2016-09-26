<?hh
namespace Plenty\Modules\System\Models;


/**
 * The Webstore Configuration Model
 */
abstract class WebstoreConfiguration 
{
	public int $webstoreId;
	public int $error404ContentPageId;
	public int $attributesDropDown;
	public int $attributeSelectDefaultOption;
	public int $attributeVariantCheck;
	public int $attributeWithMarkup;
	public int $bankContentPageId;
	public int $basketReservationTime;
	public int $cancellationRightsContentPageId;
	public int $categoryItemCount;
	public int $categoryLevelLimit;
	public int $closed;
	public int $currencyConversion;
	public int $defaultAccountingLocation;
	public string $defaultCurrency;
	public string $defaultLanguage;
	public string $defaultLayout;
	public int $defaultShippingCountryId;
	public array<string> $defaultShippingCountryList;
	public array<string> $defaultCurrencyList;
	public int $defaultParcelServiceId;
	public int $defaultParcelServicePresetId;
	public int $defaultMethodOfPaymentId;
	public int $defaultCustomerClassId;
	public int $dhlPackstationValidation;
	public int $dhlAllowPackstationActive;
	public float $dhlLimitOrderAmountForPackstation;
	public int $dhlAllowPostidentActive;
	public float $displayAttributeMarkup;
	public string $displayItemName;
	public int $displayItemOnly4Customer;
	public int $displayPriceColumn;
	public int $displayPriceNetto;
	public string $doctype;
	public string $domain;
	public string $domainSsl;
	public int $dontSplitItemBundle;
	public string $faviconPath;
	public int $frontPageContentPageId;
	public int $helpContentPageId;
	public int $itemNotFoundContentPageId;
	public int $paymentMethodsContentPageId;
	public int $contactContentPageId;
	public int $legalDisclosureContentPageId;
	public int $blogRatingActive;
	public int $blogMaxRatingPoints;
	public int $blogCommentsActive;
	public int $blogNewFeedbackVisibility;
	public int $blogCustomerNameVisibility;
	public int $itemMaxRatingPoints;
	public int $itemCommentsActive;
	public int $itemNewFeedbackVisibility;
	public int $itemCustomerNameVisibility;
	public int $categoryRatingActive;
	public int $categoryMaxRatingPoints;
	public int $categoryCommentsActive;
	public int $categoryNewFeedbackVisibility;
	public int $categoryCustomerNameVisibility;
	public int $choiceNominationRatingActive;
	public int $choiceNominationMaxRatingPoints;
	public int $choiceNominationCommentsActive;
	public int $choiceNominationNewFeedbackVisibility;
	public int $choiceNominationCustomerNameVisibility;
	public int $feedbackRatingActive;
	public int $feedbackMaxRatingPoints;
	public int $feedbackCommentsActive;
	public int $feedbackNewFeedbackVisibility;
	public int $feedbackCustomerNameVisibility;
	public string $languageList;
	public int $languageMode;
	public int $loginMode;
	public int $oversellingWarning;
	public int $maxLoginAttempts;
	public int $mobileRedirectActive;
	public int $mobileRedirectUrl;
	public int $mobileRedirectItemUrl;
	public string $name;
	public int $newsletterDirId;
	public int $paypalAccount;
	public string $ebayAccount;
	public int $privacyPolicyContentPageId;
	public string $rootDir;
	public int $sessionLifetime;
	public int $shippingContentPageId;
	public int $socialMedia;
	public int $termsConditionsContentPageId;
	public string $trustedShopsCertificationDeSealHtml;
	public string $trustedShopsCertificationDeTrustedShopsId;
	public string $trustedShopsCertificationEnSealHtml;
	public string $trustedShopsCertificationEnTrustedShopsId;
	public string $trustedShopsCertificationFrSealHtml;
	public string $trustedShopsCertificationFrTrustedShopsId;
	public string $urlFacebook;
	public string $urlFileExtension;
	public string $urlGooglePlus;
	public string $urlItemCategory;
	public string $urlItemContent;
	public string $urlLinking;
	public string $urlNeedle;
	public string $urlTitleItemContent;
	public string $urlTitleItemName;
	public string $urlTwitter;
	public int $useCharacterCrossSelling;
	public int $useDefaultShippingCountryAsShopCountry;
	public int $calcEbayShippingCostsActive;
	public int $autoGroupOpenEbayTransactions;
	public int $calcRicardoShippingCostsActive;
	public int $calcHoodShippingCostsActive;
	public int $ebayDownsellingActive;
	public int $addressCheckRegistrationSave;
	public int $addressCheckRegistrationInput;
	public int $addressCheckInvoiceDetailsSave;
	public int $addressCheckInvoiceDetailsInput;
	public int $addressCheckShippingDetailsSave;
	public int $addressCheckShippingDetailsInput;
	public int $addressCheckCustomerDetailsSave;
	public int $addressCheckCustomerDetailsInput;
	public int $addressCheckAfterDays;
	public int $facebookLoginActive;
	public int $itemCategorySorting1;
	public int $itemCategorySorting2;
	public int $itemSortByMonthlySales;
	public int $showBasePriceActive;
	public int $jumpPaymentActive;
	public int $jumpShippingActive;
	public int $showContentTermsFsk;
	public int $newsletterRegistrationActive;
	public int $ignoreCouponMinOrderValueActive;
	public int $ipAddressSaveInactive;
	public int $reuseOrderActive;
	public int $editOrderActive;
	public int $currencySymbol;
	public int $externalVatCheckInactive;
	public int $customerRegistrationCheck;
	public int $schedulerPropertyID;
	public int $customerLoginMethod;
	public int $watchlistActive;
	public int $itemwishlistActive;
	public int $documentsActive;
	public int $dynamicExportActive;
	public int $couponVisibilityActive;
	public int $retoureMethod;
	public int $itemlistPrice;
	public int $itemlistWeight;
	public int $schedulerActive;
	public int $editSchedulerPaymentMethodActive;
	public int $showSEPAMandateDownload;
	public int $changeEmailActive;
	public int $changePasswordActive;
	public int $changePasswordSendmail;
	public int $logoutHiddenActive;
	public int $displayStatusInactive;
	public int $displayMyAccountPaymentDateInactive;
	public int $displayMyAccountDeliveryDateInactive;
	public int $displayWeightInactive;
	public int $displayInvoiceDownload;
	public int $displayShippingDateActive;
	public int $minimumOrderValue;
	public int $itemAvailabilityDisabledList;
	public array<string> $itemMeasureUnit;
	public int $quickloginValidDays;
	public int $captchaCodeInactive;
	public int $itemListingOrderImportItemName;
	public int $orderRowDeliveryDate;
	public int $browserLanguage;
	public int $categoryRedirectActive;
	public int $itemRedirectActive;
	public string $itemSearchEngine;
	
	/**
	 * returns this model as an array
	 */
	public function toArray(
	):array<string, mixed>
	{
		return [];
	}

}