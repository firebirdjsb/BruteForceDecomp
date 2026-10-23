/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4F2584BA0BEF81D6D19E99E68B3CB670894DF71000FDC18EE83C29DAED19019
 * Entry: 0x000efaf0, Ghidra index: 2984, label: FUN_000efaf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000efaf0(void)

{
  undefined4 *in_EAX;
  undefined4 uVar1;
  undefined4 in_EDX;
  
  uVar1 = 0x15954c7a;
  switch(in_EDX) {
  case 0:
    *in_EAX = 0x685b609;
    return;
  case 1:
    *in_EAX = 0xf50671e3;
    return;
  case 2:
    uVar1 = 0x1b6990e7;
    break;
  case 3:
    *in_EAX = 0x3688869;
    return;
  }
  *in_EAX = uVar1;
  return;
}
