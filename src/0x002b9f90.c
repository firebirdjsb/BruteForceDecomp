/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B39823C58FF2A2BB054B4673EEEDF8D282786B624B9AA12227AECB1E6D750DE
 * Entry: 0x002b9f90, Ghidra index: 9877, label: FUN_002b9f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002b9f90(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_24 [9];
  
  if ((*(uint *)(*(int *)(param_1 + 0x58) + 0x70) & 0xc00) == 0) {
    puVar1 = local_24;
    iVar2 = 3;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_002b4100();
    FUN_002b9f30();
    return;
  }
  FUN_002b9f30();
  return;
}
