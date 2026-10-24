/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F52DA28206A3B1120D98AA1DB9E69DE004FA72C35EFDDBD3857D5D35F7C83BF
 * Entry: 0x0033f147, Ghidra index: 12638, label: FUN_0033f147
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern undefined4 FUN_0033f069(int param_1);
void FUN_0033f147(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_6;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_6[3] = 0;
  param_6[4] = param_1;
  param_6[5] = param_2;
  param_6[6] = param_3;
  param_6[8] = param_4;
  param_6[0xd] = param_5;
  FUN_00330c2d(param_6);
  param_6[2] = param_5;
  *param_6 = FUN_0033f069;
  param_6[1] = (uintptr_t)0x0033eeb1U;
  return;
}
