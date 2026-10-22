/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48A1073CD6111A4FBAAFFE6FB6ACBB8B9168FC54BD78FCF5CDD07F5F54EBBBF3
 * Entry: 0x001b5cd0, Ghidra index: 5682, label: FUN_001b5cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001b5cd0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_001b5df0();
  FUN_001bb640(param_1 + 0x70);
  FUN_001bbab0(param_1 + 0x80);
  puVar2 = (undefined4 *)(param_2 + 0x90);
  puVar3 = (undefined4 *)(param_1 + 0x90);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_001bbf80(param_1 + 0xa8);
  FUN_001b5e50(param_2 + 0xb8);
  FUN_001e0dd0(param_1 + 0x120);
  return param_1;
}
