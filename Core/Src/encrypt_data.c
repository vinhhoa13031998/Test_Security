/*
 * encrypt_data.c
 *
 *  Created on: 23 avr. 2021
 *      Author: vinhh
 */

#include "encrypt_data.h"
#include "stdio.h"
//#include "/Test_Security/Middleware/ST/STM32_Crypto/Lib/libSTM32CryptographicV3.0.0_CM4_GCC_FPU.a"
/*
 * 		Function
 */

int32_t STM32_AES_CBC_Encrypt(uint8_t*  InputMessage,
                              uint32_t  InputMessageLength,
                              uint8_t  *AES192_Key,
                              uint8_t  *InitializationVector,
                              uint32_t  IvLength,
                              uint8_t  *OutputMessage,
                              uint32_t *OutputMessageLength)
{
	AESCBCctx_stt AESctx;

	  uint32_t error_status = AES_ERR_BAD_PARAMETER;

	  int32_t outputLength = 0;

	  /* Set flag field to default value */
	  AESctx.mFlags = E_SK_DEFAULT;

	  /* Set key size to 24 (corresponding to AES-192) */
	  AESctx.mKeySize = 24;

	  /* Set iv size field to IvLength*/
	  AESctx.mIvSize = IvLength;

	  /* Initialize the operation, by passing the key.
	   * Third parameter is NULL because CBC doesn't use any IV */
	  error_status = AES_CBC_Encrypt_Init(&AESctx, AES192_Key, InitializationVector );

	  /* check for initialization errors */
	  if (error_status == AES_SUCCESS)
	  {
	    /* Encrypt Data */
	    error_status = AES_CBC_Encrypt_Append(&AESctx,
	                                          InputMessage,
	                                          InputMessageLength,
	                                          OutputMessage,
	                                          &outputLength);

	    if (error_status == AES_SUCCESS)
	    {
	      /* Write the number of data written*/
	      *OutputMessageLength = outputLength;
	      /* Do the Finalization */
	      error_status = AES_CBC_Encrypt_Finish(&AESctx, OutputMessage + *OutputMessageLength, &outputLength);
	      /* Add data written to the information to be returned */
	      *OutputMessageLength += outputLength;
	    }
	  }

	  return error_status;
}

int32_t Decrypt_Data_CBC(uint8_t*  InputMessage,
		uint32_t  InputMessageLength,
		uint8_t  *AES192_Key,
		uint8_t  *InitializationVector,
		uint32_t  IvLength,
		uint8_t  *OutputMessage,
		uint32_t *OutputMessageLength)
{
	AESCBCctx_stt AESctx;

	int32_t error_status = AES_SUCCESS;

	int32_t outputLength = 0;

	/* Set flag field to default value */
	AESctx.mFlags = E_SK_DEFAULT;

	/* Set key size to 24 (corresponding to AES-192) */
	AESctx.mKeySize = CRL_AES192_KEY;

	/* Set iv size field to IvLength*/
	AESctx.mIvSize = IvLength;

	/* Initialize the operation, by passing the key.
    * Third parameter is NULL because CBC doesn't use any IV */
    error_status = AES_CBC_Decrypt_Init(&AESctx, AES192_Key, InitializationVector );

    if (error_status == AES_SUCCESS)
    {
    	/* Decrypt Data */
	   error_status = AES_CBC_Decrypt_Append(&AESctx,
										    InputMessage,
										    InputMessageLength,
										    OutputMessage,
										    &outputLength);

		if (error_status == AES_SUCCESS)
		{
		  // Write the number of data written*/
		  *OutputMessageLength = outputLength;
		  // Do the Finalization */
		  error_status = AES_CBC_Decrypt_Finish(&AESctx, OutputMessage + *OutputMessageLength, &outputLength);
		  // Add data written to the information to be returned */
		  *OutputMessageLength += outputLength;
		}
     }

  return error_status;
}

