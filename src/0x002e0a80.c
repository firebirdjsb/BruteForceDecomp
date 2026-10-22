/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 758DB91AF2555A194EBF141B662C10928F8844C6A87F5B25788D4C1FD111BF07
 * Entry: 0x002e0a80, Ghidra index: 10360, label: FUN_002e0a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e0a80(undefined4 *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  undefined4 *puVar5;
  
  cVar1 = FUN_002e2fc0();
  if (cVar1 == '\0') {
    return -0x7ffbfffc;
  }
  FUN_002e3560(0xffffffff,0x3e9);
  **(undefined4 **)(in_ECX + 0x100) = *(undefined4 *)(in_ECX + 0x634);
  puVar5 = *(undefined4 **)(in_ECX + 0x100);
  for (uVar4 = param_2 >> 2; puVar5 = puVar5 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
  }
  for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  uVar2 = FUN_000a3d50();
  iVar3 = FUN_002e32c0(*(undefined4 *)(in_ECX + 0x100),param_2 + 4,uVar2);
  if (-1 < iVar3) {
    FUN_002e2c20(2,1);
    FUN_002e2c20(0,param_2);
  }
  return iVar3;
}
