/*
 * SPDX-FileCopyrightText: 2026 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

/* ARM RTABI division-by-zero policy: return the supplied fallback value. */
int __aeabi_idiv0(int return_value) {
    return return_value;
}
