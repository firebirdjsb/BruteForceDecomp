/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92AC600166D5F80B5867992AC1BF3C9E4D6B442A19FFE829759240DE8FA9034A
 * Entry: 0x0031b21f, Ghidra index: 12292, label: FUN_0031b21f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031b21f(int param_1,undefined4 *param_2,uint param_3)

{
  int in_ECX;
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(**(int **)(in_ECX + 0x10) + param_1);
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return;
}
