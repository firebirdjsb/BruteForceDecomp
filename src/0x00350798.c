/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8824077A23830511B490D3CFF8EF142DD18249F64DB2C6BA1BF212E27CB49F86
 * Entry: 0x00350798, Ghidra index: 13052, label: FUN_00350798
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00350798(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = FUN_0034cb5a(0x4954454e,0x4040000,6,0,0,0);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_0034c841();
    *puVar2 = *param_1;
    *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_1 + 1);
    *(undefined4 *)((int)puVar2 + 6) = *(undefined4 *)(in_ECX + 0x1e0);
    *(undefined2 *)((int)puVar2 + 10) = *(undefined2 *)(in_ECX + 0x1e4);
    *(undefined2 *)(puVar2 + 3) = param_2;
    *(undefined2 *)((int)puVar2 + 0x12) = 0;
    *(undefined2 *)(puVar2 + 4) = param_3;
    *(undefined1 *)((int)puVar2 + 0xe) = 0x11;
    *(undefined1 *)((int)puVar2 + 0xf) = 0xa7;
    FUN_00355bae(iVar1,0);
  }
  return;
}
