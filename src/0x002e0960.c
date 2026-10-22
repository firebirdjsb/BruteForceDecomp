/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF14B3A4579F557D2F875EFBD64D49EA458867FE6C7CFB22561813B22D72CBDA
 * Entry: 0x002e0960, Ghidra index: 10359, label: FUN_002e0960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e0960(undefined2 *param_1,uint param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  
  iVar2 = param_2;
  puVar1 = param_1;
  if ((param_1 != (undefined2 *)0x0) && (param_2 != 0)) {
    param_1 = *(undefined2 **)(in_ECX + 0xf0);
    uVar3 = FUN_002e3ec0();
    *puVar1 = uVar3;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(iVar2 + 0x1c4);
    iVar4 = FUN_002e4360(*(undefined4 *)(in_ECX + 0x100),&param_1,*(char *)(in_ECX + 0x630) != '\0')
    ;
    if (-1 < iVar4) {
      param_2 = 0;
      while( true ) {
        if (((*(byte *)((int)puVar1 + 3) & 0xe) == 0) && (*(byte *)((int)puVar1 + 3) >> 4 != 7)) {
          uVar5 = 1;
        }
        else {
          uVar5 = *(uint *)(in_ECX + 0x120);
        }
        if (uVar5 <= param_2) break;
        iVar4 = FUN_002e32c0(*(undefined4 *)(in_ECX + 0x100),param_1,iVar2 + 0x24);
        if (iVar4 < 0) {
          return iVar4;
        }
        param_2 = param_2 + 1;
      }
      FUN_002e3f50();
      FUN_002e2c20(2,1);
      FUN_002e2c20(0,param_1);
      FUN_002e2c20(2,1);
      FUN_002e2c20(0,param_1);
    }
    return iVar4;
  }
  return -0x7fffbffd;
}
