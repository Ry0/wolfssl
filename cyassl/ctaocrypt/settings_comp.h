/* settings_comp.h
 *
 * Copyright (C) 2006-2014 wolfSSL Inc.
 *
 * This file is part of wolfSSL. (formerly known as CyaSSL)
 *
 * wolfSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * wolfSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef CTAO_CRYPT_SETTINGS_C_H
#define CTAO_CRYPT_SETTINGS_C_H

/* asn.c compatibility */
#define RsaPrivateKeyDecode   wc_RsaPrivateKeyDecode
#define RsaPublicKeyDecode    wc_RsaPublicKeyDecode
#define RsaPublicKeyDecodeRaw wc_RsaPublicKeyDecodeRaw

/* Macro redefinitions for compatibility */
#if defined(WOLFSSL_SHA512) && !defined(CYASSL_SHA512)
    #define CYASSL_SHA512
#endif
#if defined(WOLFSSL_SHA384) && !defined(CYASSL_SHA384)
    #define CYASSL_SHA384
#endif
#if defined(WOLFSSL_LEANPSK) && !defined(CYASSL_LEANPSK)
    #define CYASSL_LEANPSK
#endif
#if defined(NO_WOLFSSL_MEMORY) && !defined(NO_CYASSL_MEMORY)
    #define NO_CYASSL_MEMORY
#endif

#endif /* CTAO_CRYPT_SETTINGS_C_H */

