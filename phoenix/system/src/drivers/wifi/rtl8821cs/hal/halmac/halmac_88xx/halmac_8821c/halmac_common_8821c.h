/******************************************************************************
 *
 * Copyright(c) 2017 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 ******************************************************************************/

#ifndef _HALMAC_COMMON_8821C_H_
#define _HALMAC_COMMON_8821C_H_

#include "../../halmac_api.h"

#if HALMAC_8821C_SUPPORT

HALMAC_RET_STATUS
halmac_get_hw_value_8821c(
	IN PHALMAC_ADAPTER pHalmac_adapter,
	IN HALMAC_HW_ID hw_id,
	OUT VOID *pvalue
);

HALMAC_RET_STATUS
halmac_set_hw_value_8821c(
	IN PHALMAC_ADAPTER pHalmac_adapter,
	IN HALMAC_HW_ID hw_id,
	IN VOID *pvalue
);

#endif/* HALMAC_8821C_SUPPORT */

#endif/* _HALMAC_COMMON_8821C_H_ */
