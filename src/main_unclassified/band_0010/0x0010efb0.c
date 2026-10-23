/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3A2F9580A33F7B40F734BFB8016FC919E238506D9919CD7074A81E47EEAA74E
 * Entry: 0x0010efb0, Ghidra index: 3523, label: FUN_0010efb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0010f019) */
/* WARNING: Removing unreachable block (ram,0x0010f02a) */

int FUN_0010efb0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_18 [8];
  int local_10;
  int local_8;
  
  uVar2 = FUN_0010f460(local_18);
  piVar3 = (int *)FUN_0010f340(uVar2);
  iVar1 = *piVar3;
  if (local_8 != 0) {
    FUN_0008f6e0();
  }
  if (local_10 != 0) {
    FUN_0008f6e0();
  }
  return iVar1 + 0x10;
}
