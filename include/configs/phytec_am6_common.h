/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * PHYTEC common board options for AM6x platforms.
 *
 * Copyright (C) 2022 PHYTEC Messtechnik GmbH
 * Author: Wadim Egorov <w.egorov@phytec.de>
 */

#ifndef __PHYTEC_AM6_COMMON_H
#define __PHYTEC_AM6_COMMON_H

/* DDR Configuration */
#define CONFIG_SYS_SDRAM_BASE1		0x880000000

#ifdef CONFIG_SYS_K3_SPL_ATF
#define CONFIG_SPL_FS_LOAD_PAYLOAD_NAME	"tispl.bin"
#endif

#endif /* ! __PHYTEC_AM6_COMMON_H */
