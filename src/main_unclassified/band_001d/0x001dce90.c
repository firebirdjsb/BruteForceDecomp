/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78C6806D5F0460665D0176CA8F897CB9F69BBAE91A1BE0C0AAF4A0E80AB7A64A
 * Entry: 0x001dce90, Ghidra index: 6600, label: FUN_001dce90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dce90(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *in_EDX;
  
  if (in_EAX != (undefined4 *)0x0) {
    for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
      *in_EAX = *in_EDX;
      in_EDX = in_EDX + 1;
      in_EAX = in_EAX + 1;
    }
  }
  return;
}
