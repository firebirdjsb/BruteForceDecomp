/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA33EA5F46E2EF89AE433FBED93C06E77A7D9923A1E05DA9C13C71E7FF5C299A
 * Entry: 0x001d7540, Ghidra index: 6397, label: FUN_001d7540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d7540(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 0xf;
    puVar1 = param_3 + 4;
    do {
      *param_3 = *param_1;
      puVar1[-3] = puVar2[-0xe];
      puVar1[-2] = puVar2[-0xd];
      puVar1[-1] = puVar2[-0xc];
      *puVar1 = puVar2[-0xb];
      puVar1[1] = puVar2[-10];
      FUN_0001f4f0(puVar2 + -9,0,0xffffffff);
      puVar1[9] = puVar2[-2];
      puVar1[10] = puVar2[-1];
      puVar1[0xb] = *puVar2;
      param_1 = param_1 + 0x10;
      param_3 = param_3 + 0x10;
      puVar1 = puVar1 + 0x10;
      puVar2 = puVar2 + 0x10;
    } while (param_1 != param_2);
  }
  return param_3;
}
