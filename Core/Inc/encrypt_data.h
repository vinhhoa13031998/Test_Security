/*
 * encrypt_data.h
 *
 *  Created on: 23 avr. 2021
 *      Author: vinhh
 */

#ifndef ENCRYPT_DATA_H_
#define ENCRYPT_DATA_H_

/**
 * User private include
 */
#include "main.h"
#include "aes_cbc.h"


/*
 * User private definition
 */

#define PLAINTEXT_LENGTH 64


#define CRL_AES128_KEY   16 /*!< Number of bytes (uint8_t) necessary to store an AES key of 128 bits. */
#define CRL_AES128_EXPANDED_KEY  44 /*!< Number of ints (uint32_t) necessary to store an expanded AES key of 128 bits. */
#define CRL_AES192_KEY   24 /*!< Number of bytes (uint8_t) necessary to store an AES key of 192 bits. */
#define CRL_AES192_EXPANDED_KEY  52 /*!< Number of ints (uint32_t) necessary to store an expanded AES key of 192 bits. */
#define CRL_AES256_KEY   32 /*!< Number of bytes (uint8_t) necessary to store an AES key of 256 bits. */
#define CRL_AES256_EXPANDED_KEY  60 /*!< Number of ints (uint32_t) necessary to store an expanded AES key of 256 bits. */


#define CRL_AES_BLOCK     16 /*!< Number of bytes (uint8_t) necessary to store an AES block. */

#ifdef INCLUDE_AES256
# define CRL_AES_MAX_EXPKEY_SIZE 60 /*!< The max size of the AES expanded key (in uint32_t) according to the INCLUDE OPTIONS */
# else
#   ifdef INCLUDE_AES192
#     define CRL_AES_MAX_EXPKEY_SIZE 52 /*!< The max size of the AES expanded key (in uint32_t) according to the INCLUDE OPTIONS */
#   else
#     define CRL_AES_MAX_EXPKEY_SIZE 44 /*!< The max size of the AES expanded key (in uint32_t) according to the INCLUDE OPTIONS */
#   endif
#endif /*include aes 256 */

/** @defgroup AESError AES Error Codes
  * @{
  */
#define AES_SUCCESS             (int32_t) (0)    /*!< AES of PRIVKEY Success */
#define AES_ERR_BAD_INPUT_SIZE  (int32_t) (3101) /*!<  AES of PRIVKEY Invalid input size */
#define AES_ERR_BAD_OPERATION   (int32_t) (3102) /*!<  AES of PRIVKEY Invalid operation */
#define AES_ERR_BAD_CONTEXT     (int32_t) (3103) /*!<  AES of PRIVKEY The AES context contains some invalid or uninitialized values */
#define AES_ERR_BAD_PARAMETER   (int32_t) (3104) /*!<  AES of PRIVKEY One of the expected function parameters is invalid */



/*
 * User private typedef
 */

typedef enum {
  E_SK_DEFAULT = (uint32_t) (0x00000000), /*!< User Flag: No flag specified. This is the default value that should be set to this flag  */
  E_SK_DONT_PERFORM_KEY_SCHEDULE = (uint32_t) (0x00000001), /*!< User Flag: Used to force the init to not reperform key schedule.\n
                                                                 The classic example is where the same key is used on a new message, in this case to redo key scheduling is
                                                                 a useless waste of computation, could be particularly useful on GCM, where key schedule is very complicated. */
  E_SK_FINAL_APPEND = (uint32_t) (0x00000020),   /*!< User Flag: Must be set in CMAC mode before the final Append call occurs. */
  E_SK_OPERATION_COMPLETED  = (uint32_t) (0x00000002),   /*!< Internal Flag (not to be set/read by user): used to check that the Finish function has been already called */
  E_SK_NO_MORE_APPEND_ALLOWED = (uint32_t) (0x00000004), /*!< Internal Flag (not to be set/read by user): it is set when the last append has been called. Used where the append is called with an InputSize not
                                                                    multiple of the block size, which means that is the last input.*/
  E_SK_NO_MORE_HEADER_APPEND_ALLOWED = (uint32_t) (0x00000010),   /*!< Internal Flag (not to be set/read by user): only for authenticated encryption modes. \n
                                                                      It is set when the last header append has been called. Used where the header append is called with an InputSize not
                                                                      multiple of the block size, which means that is the last input.*/
  E_SK_APPEND_DONE = (uint32_t) (0x00000040),   /*!< Internal Flag (not to be set/read by user): only for CMAC.It is set when the first append has been called */
  E_SK_SET_COUNTER = (uint32_t)(0x00000080),    /*!< User Flag: With ChaCha20 this is used to indicate a value for the counter, used to process non contiguous blocks (i.e. jump ahead)*/

} SKflags_et; /*!< Type definition for Symmetric Key Flags */


typedef struct
{
	uint32_t   mContextId; /*!< Unique ID of this context. \b Not \b used in current implementation. */
	SKflags_et mFlags; /*!< 32 bit mFlags, used to perform keyschedule */
	const uint8_t *pmKey; /*!< Pointer to original Key buffer */
	const uint8_t *pmIv; /*!< Pointer to original Initialization Vector buffer */
	int32_t   mIvSize; /*!< Size of the Initialization Vector in bytes */
	uint32_t   amIv[4]; /*!< Temporary result/IV */
	int32_t   mKeySize; /*!< Key length in bytes */
	uint32_t   amExpKey[CRL_AES_MAX_EXPKEY_SIZE]; /*!< Expanded AES key */
}AESCBCctx_stt; /*!< AES context structure for CBC mode */


/*
 * User private function
 */
/*int32_t Encrypt_Data_CBC(uint8_t*  InputMessage,
						uint32_t  InputMessageLength,
						uint8_t  *AES192_Key,
						uint8_t  *InitializationVector,
						uint32_t  IvLength,
						uint8_t  *OutputMessage,
						uint32_t *OutputMessageLength);

int32_t Decrypt_Data_CBC(uint8_t*  InputMessage,
						uint32_t  InputMessageLength,
						uint8_t  *AES192_Key,
						uint8_t  *InitializationVector,
						uint32_t  IvLength,
						uint8_t  *OutputMessage,
						uint32_t *OutputMessageLength);*/


#endif /* ENCRYPT_DATA_H_ */
