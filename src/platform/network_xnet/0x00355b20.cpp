/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25D87B7FCA4D12D0558E26B01E3C2BFDBC044F3E2C0A2DDB06465D4B14809D7A
 * Entry: 0x00355b20, Ghidra index: 13127, label: FUN_00355b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00355b20(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)FUN_0034c841();
  *puVar1 = *param_2;
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined4 *)((int)puVar1 + 6) = *(undefined4 *)(in_ECX + 0x1e0);
  *(undefined2 *)((int)puVar1 + 10) = *(undefined2 *)(in_ECX + 0x1e4);
  *(undefined2 *)(puVar1 + 3) = 8;
  FUN_0034d2b1(param_1);
  return;
}
