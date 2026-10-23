/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97AEABABEECA561D3BBBD2DC8083CA8E54C48066FA499F502A1E9F87A3923473
 * Entry: 0x0008ba30, Ghidra index: 1687, label: FUN_0008ba30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0008bad8) */
/* WARNING: Removing unreachable block (ram,0x0008bafe) */
/* WARNING: Removing unreachable block (ram,0x0008bacb) */
/* WARNING: Removing unreachable block (ram,0x0008bb20) */

void FUN_0008ba30(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x38) + 0xbf0);
  iVar3 = FUN_000735f0();
joined_r0x0008ba60:
  do {
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0x41700000;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0xbec) + 0x1c))();
      return;
    }
    if ((*(int *)(*(int *)(iVar3 + 0xc) + 8) == -0x11c4f274) &&
       (cVar2 = FUN_0008b9e0(param_1), cVar2 == '\0')) {
      FUN_001611d0();
    }
    iVar3 = *(int *)(iVar1 + 4);
    if (iVar3 != *(int *)(iVar1 + 0xc)) {
      do {
        iVar3 = *(int *)(iVar3 + 8);
        if (*(int *)(iVar3 + 0x54) == 0) {
          *(undefined4 *)(iVar1 + 4) = **(undefined4 **)(iVar1 + 4);
          goto joined_r0x0008ba60;
        }
        iVar3 = **(int **)(iVar1 + 4);
        *(int *)(iVar1 + 4) = iVar3;
      } while (iVar3 != *(int *)(iVar1 + 0xc));
    }
    iVar3 = 0;
  } while( true );
}
