/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9632AB80A7C1959FF9D061EA238899F4EA6FE695A253F7B857DDDDED69AF0F22
 * Entry: 0x0015ba40, Ghidra index: 4537, label: FUN_0015ba40
 * STATUS: C11_SYNTAX_REPAIRED, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern char s_23_23_ISchema_00406e3c[];

/* Original x86 0x0015ba40..0x0015baf4: EBX is a caller-owned 32-bit
 * output word, ESI is a guest interface, and [entry ESP+4] is param_1.
 * Three direct callers are 0x0015bedb, 0x0015c9a7, and 0x0015dfcd.
 * ABI_UNVERIFIED: these pseudo-register locals are NOT host C parameters;
 * interface words, vtables, and callback outputs still require guest32
 * memory translation and a verified register/stack calling bridge.
 * Do not treat the host pointers below as a native PC implementation.
 */
void FUN_0015ba40(undefined4 *param_1)
{
  undefined4 *unaff_EBX;
  int *unaff_ESI;
  uint32_t guest_flags; /* [entry ESP-4], written by virtual +0x0c */
  int *guest_current = (int *)0; /* [entry ESP-12] */
  int *guest_selected; /* [entry ESP-8], initialized before virtual +0x10 */

  *unaff_EBX = 0;
  (**(code **)(*unaff_ESI + 0x0c))(unaff_ESI, &guest_flags);
  if ((guest_flags & UINT32_C(0x10)) != 0) {
    if (guest_current != (int *)0) {
      (**(code **)(*guest_current + 0x08))(guest_current);
    }
    guest_current = (int *)0;
    (**(code **)(*unaff_ESI + 0x1c))(unaff_ESI, &guest_current);
  } else {
    if (guest_current != (int *)0) {
      (**(code **)(*guest_current + 0x08))(guest_current);
    }
    guest_current = (int *)0;
    (**(code **)(*unaff_ESI + 0x18))(unaff_ESI, &guest_current);
  }
  if (guest_current != (int *)0) {
    guest_selected = (int *)0;
    (**(code **)(*guest_current + 0x10))
        (guest_current, s_23_23_ISchema_00406e3c, &guest_selected);
    (**(code **)(*guest_current + 0x20))(guest_current, unaff_EBX);
    if (param_1 != (undefined4 *)0) {
      /* Original 0x0015baca writes one guest DWORD, not a host pointer. */
      *param_1 = (uint32_t)(uintptr_t)guest_selected;
      /* Original dereferences this output without an additional null check. */
      (**(code **)(*guest_selected + 0x04))(guest_selected);
    }
    if (guest_selected != (int *)0) {
      (**(code **)(*guest_selected + 0x08))(guest_selected);
    }
    if (guest_current != (int *)0) {
      (**(code **)(*guest_current + 0x08))(guest_current);
    }
  }
}
