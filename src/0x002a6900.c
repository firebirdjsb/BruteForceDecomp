/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9960936CB2422C787D107808DD94E66A1D550E53E3048DE1F0DCC685F919179B
 * Entry: 0x002a6900, Ghidra index: 9590, label: FUN_002a6900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x002a696e) */

void FUN_002a6900(void)

{
  int *unaff_EBX;
  int *unaff_ESI;
  int iVar1;
  char cStack_31;
  char cStack_22;
  int local_14 [5];
  
  (**(code **)(*unaff_EBX + 0x10))();
  cStack_22 = (char)((uint)local_14 >> 0x10);
  local_14[0] = (int)cStack_22;
  (**(code **)(*unaff_ESI + 0x24))();
  cStack_31 = (char)local_14 >> 7;
  if (cStack_31 < '\0') {
    iVar1 = 0;
    do {
      (**(code **)(*unaff_ESI + 0x14))();
      FUN_002a6700(0,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 9);
    (**(code **)(*unaff_ESI + 0x18))();
  }
  return;
}
