/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D2EDD174A91DB5FE4AD4631966B83CB795A999CEBF304219D020C12314D2F5F
 * Entry: 0x0003aa10, Ghidra index: 415, label: FUN_0003aa10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0003ab95) */

undefined4 FUN_0003aa10(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int unaff_EDI;
  
  uVar2 = 0;
  *param_2 = 0;
  if ((in_ECX != 0) && (in_ECX != 0x56)) {
    if (in_ECX == 0x58) {
      FUN_00039f00(unaff_EDI);
      iVar3 = FUN_00055aa0();
      uVar2 = *(undefined4 *)(iVar3 + 0x5c);
      FUN_00022f70();
      uVar1 = *(undefined4 *)(unaff_EDI + 0x44);
      *(undefined4 *)(unaff_EDI + 0x44) = uVar2;
      (**(code **)(*(int *)(unaff_EDI + 0x40) + 4))();
      iVar3 = FUN_00022f30();
      if (iVar3 == 0) {
        *(undefined4 *)(unaff_EDI + 0x44) = uVar1;
        iVar3 = FUN_00055aa0();
        *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 1;
      }
      FUN_00016150();
      *param_2 = 1;
      FUN_0001b650();
      FUN_001611d0();
      FUN_001611d0();
      FUN_001611d0();
      FUN_001611d0();
      FUN_001611d0();
      FUN_001611d0();
      FUN_001611d0();
      FUN_001611d0();
      FUN_001611d0();
      FUN_00039610(unaff_EDI + 0x404);
      uVar2 = 1;
    }
    return uVar2;
  }
  iVar3 = *(int *)(param_1 + 4);
  piVar4 = (int *)FUN_0001ba10();
  if (iVar3 == *(int *)(*piVar4 + 4)) {
    FUN_00016150();
    *param_2 = 1;
  }
  return 1;
}
