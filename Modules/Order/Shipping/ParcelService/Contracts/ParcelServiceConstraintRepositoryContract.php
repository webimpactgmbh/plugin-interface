<?php
namespace Plenty\Modules\Order\Shipping\ParcelService\Contracts;


/**
 * The ParcelServiceConstraintRepositoryContract is the interface for the parcel service constraint type repository.
 */
interface ParcelServiceConstraintRepositoryContract 
{

	public function create(
		 $data
	);

	public function getById(
		 $id
	);

	public function delete(
		 $id
	);

}