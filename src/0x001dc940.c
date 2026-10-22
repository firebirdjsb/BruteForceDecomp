/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0AD70276CF1EE14C55598F2190315DB27292244FBC847E7EC7DDDE29D035B94
 * Entry: 0x001dc940, Ghidra index: 6565, label: FUN_001dc940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dc940(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  while (param_1 != param_2) {
    puVar3 = param_1 + 0xd;
    puVar1 = in_EAX + 0xd;
    puVar4 = param_1;
    puVar5 = in_EAX;
    for (iVar2 = 0xd; in_EAX = puVar1, param_1 = puVar3, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}
