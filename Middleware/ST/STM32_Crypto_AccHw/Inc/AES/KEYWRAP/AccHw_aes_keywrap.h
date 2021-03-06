/**
  ******************************************************************************
  * @file    AccHw_aes_keywrap.h
  * @author  MCD Application Team
  * @version V3.1.0
  * @date    30-October-2015
  * @brief   AES in KeyWrap Mode
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2015 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  *****************************************************************************/

#ifndef __CRL_AccHw_AES_KEYWRAP_H__
#define __CRL_AccHw_AES_KEYWRAP_H__

#ifdef __cplusplus
 extern "C" {
#endif

/** @ingroup AESKEYWRAP
  * @{
  */

/** AES context structure for Key Wrap mode */
typedef AccHw_AESECBctx_stt AccHw_AESKWctx_stt;
/** Number of uint32_t words in a Key Wrap Block */
#define  CRL_KWRAP_BLOCK_SIZE 2
/** Number of uint8_t bytes in a Key Wrap Block */
#define  CRL_AES_KWRAP_BLOCK 8

#ifdef INCLUDE_AccHw_ENCRYPTION
/* load the key and ivec, eventually performs key schedule, init hw, etc. */
int32_t AccHw_AES_KeyWrap_Encrypt_Init (AccHw_AESKWctx_stt *P_pAESKWctx, const uint8_t *P_pKey, const uint8_t *P_pIv);

/* launch crypto operation , can be called just one times */
int32_t AccHw_AES_KeyWrap_Encrypt_Append (AccHw_AESKWctx_stt *P_pAESKWctx,
                                    const uint8_t *P_pInputBuffer,
                                    int32_t        P_inputSize,
                                    uint8_t       *P_pOutputBuffer,
                                    int32_t       *P_pOutputSize);

/* Possible final output */
int32_t AccHw_AES_KeyWrap_Encrypt_Finish (AccHw_AESKWctx_stt *P_pAESKWctx,
                                    uint8_t       *P_pOutputBuffer,
                                    int32_t       *P_pOutputSize);
#endif /* ENC */
#ifdef INCLUDE_AccHw_DECRYPTION
/* load the key and ivec, eventually performs key schedule, init hw, etc. */
int32_t AccHw_AES_KeyWrap_Decrypt_Init (AccHw_AESKWctx_stt *P_pAESKWctx, const uint8_t *P_pKey, const uint8_t *P_pIv);

/* launch crypto operation , can be called several times */
int32_t AccHw_AES_KeyWrap_Decrypt_Append (AccHw_AESKWctx_stt *P_pAESKWctx,
                                    const uint8_t *P_pInputBuffer,
                                    int32_t        P_inputSize,
                                    uint8_t       *P_pOutputBuffer,
                                    int32_t       *P_pOutputSize);

/* Possible final output */
int32_t AccHw_AES_KeyWrap_Decrypt_Finish (AccHw_AESKWctx_stt *P_pAESKWctx,
                                    uint8_t       *P_pOutputBuffer,
                                    int32_t       *P_pOutputSize);
#endif

/** @} */

#ifdef __cplusplus
}
#endif

#endif /*__CRL_AccHw_AES_KEYWRAP_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
