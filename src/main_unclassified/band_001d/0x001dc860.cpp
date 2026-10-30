/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A9DE8FC048006E5E7FA2FB9C6A3E069F166919DE8F4B4A430657CA917659B8A
 * Entry: 0x001dc860, Ghidra index: 6559, label: FUN_001dc860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dc860(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  while (param_1 != param_2) {
    puVar3 = param_1 + 7;
    puVar1 = in_EAX + 7;
    puVar4 = param_1;
    puVar5 = in_EAX;
    for (iVar2 = 7; in_EAX = puVar1, param_1 = puVar3, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}
