/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23E80A0F102C24FAB6F52AFF2EA6C1AC016980FE09A9D943841E86787B842751
 * Entry: 0x00355bea, Ghidra index: 13131, label: FUN_00355bea
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00355bea(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  puVar2 = (undefined4 *)FUN_0034cb5a(0x6954454e,0xc040000,0x1c,0,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_0034c841();
    puVar1 = (undefined2 *)*puVar2;
    if (param_4 == (undefined4 *)0x0) {
      *puVar3 = 0xffffffff;
      *(undefined2 *)(puVar3 + 1) = 0xffff;
      *(undefined4 *)(puVar1 + 9) = 0;
      puVar1[0xb] = 0;
    }
    else {
      *puVar3 = *param_4;
      *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(param_4 + 1);
      *(undefined4 *)(puVar1 + 9) = *param_4;
      puVar1[0xb] = *(undefined2 *)(param_4 + 1);
    }
    *(undefined4 *)((int)puVar3 + 6) = *(undefined4 *)(in_ECX + 0x1e0);
    *(undefined2 *)((int)puVar3 + 10) = *(undefined2 *)(in_ECX + 0x1e4);
    *(undefined2 *)(puVar3 + 3) = 0x608;
    puVar1[3] = param_1;
    *puVar1 = 0x100;
    puVar1[1] = 8;
    *(undefined1 *)(puVar1 + 2) = 6;
    *(undefined1 *)((int)puVar1 + 5) = 4;
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(in_ECX + 0x1e0);
    puVar1[6] = *(undefined2 *)(in_ECX + 0x1e4);
    *(undefined4 *)(puVar1 + 7) = param_2;
    *(undefined4 *)(puVar1 + 0xc) = param_3;
    FUN_00355bae(puVar2,0);
  }
  return;
}
