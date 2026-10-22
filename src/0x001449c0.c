/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0796D037B8F3F5A2EA9A65E441B1494F0E662AD13097C757BEA870AD9C69F26C
 * Entry: 0x001449c0, Ghidra index: 4166, label: FUN_001449c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001449c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 == param_2) {
    *in_EAX = param_3;
    return;
  }
  do {
    uVar1 = param_1[3];
    uVar2 = param_1[2];
    puVar4 = param_1 + 4;
    uVar3 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar3;
    puVar5 = param_3 + 4;
    param_3[2] = uVar2;
    param_3[3] = uVar1;
    param_1 = puVar4;
    param_3 = puVar5;
  } while (puVar4 != param_2);
  *in_EAX = puVar5;
  return;
}
