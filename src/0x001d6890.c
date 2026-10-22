/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 764AEE794CD3C58E9AFA889C7833B1A098F408BE5B3C5773EBC06125363B7031
 * Entry: 0x001d6890, Ghidra index: 6367, label: FUN_001d6890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d6890(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    puVar3 = in_EAX + 7;
    puVar4 = param_1 + 6;
    do {
      *in_EAX = *param_1;
      puVar3[-6] = puVar4[-5];
      puVar3[-5] = puVar4[-4];
      puVar3[-4] = puVar4[-3];
      puVar3[-3] = puVar4[-2];
      uVar1 = puVar4[1];
      uVar2 = *puVar4;
      puVar3[-2] = puVar4[-1];
      puVar3[-1] = uVar2;
      *puVar3 = uVar1;
      uVar1 = puVar4[4];
      uVar2 = puVar4[3];
      puVar3[1] = puVar4[2];
      puVar3[2] = uVar2;
      puVar3[3] = uVar1;
      param_1 = param_1 + 0xb;
      in_EAX = in_EAX + 0xb;
      puVar3 = puVar3 + 0xb;
      puVar4 = puVar4 + 0xb;
    } while (param_1 != param_2);
  }
  return;
}
