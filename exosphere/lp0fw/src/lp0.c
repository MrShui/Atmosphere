/*
 * Copyright (c) 2018 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#include "utils.h"
#include "lp0.h"
#include "pmc.h"
#include "timer.h"

void reboot(void) {
    /* Write MAIN_RST */
    APBDEV_PMC_CNTRL_0 = 0x10;
    while (true) {
        /* Wait for reboot. */
    }
}

void lp0_entry_main(warmboot_metadata_t *meta) {
    /* Before doing anything else, ensure some sanity. */
    if (meta->magic != WARMBOOT_MAGIC || meta->tz_relative_offset > 0x2000) {
        reboot();
    }
    
    /* TODO: stuff */

    while (true) { /* TODO: Halt BPMP */ }
}


