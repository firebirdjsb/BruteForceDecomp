/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8239D2AB2E4D619C3866E6C4434A1A1B67F32B7FEA46BB3358704C56AAD6ADE9
 * Entry: 0x001d6920, Ghidra index: 6368, label: FUN_001d6920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d6920(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *in_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    puVar3 = (undefined4 *)(param_2 + 0x18);
    puVar4 = (undefined4 *)(param_3 + 0x1c);
    do {
      *(undefined4 *)(param_3 + -0x2c) = *(undefined4 *)(param_2 + -0x2c);
      puVar4[-0x11] = puVar3[-0x10];
      puVar4[-0x10] = puVar3[-0xf];
      puVar4[-0xf] = puVar3[-0xe];
      param_2 = param_2 + -0x2c;
      param_3 = param_3 + -0x2c;
      puVar4[-0xe] = puVar3[-0xd];
      uVar1 = puVar3[-10];
      uVar2 = puVar3[-0xb];
      puVar4[-0xd] = puVar3[-0xc];
      puVar4[-0xc] = uVar2;
      puVar4[-0xb] = uVar1;
      uVar1 = puVar3[-7];
      uVar2 = puVar3[-8];
      puVar4[-10] = puVar3[-9];
      puVar4[-9] = uVar2;
      puVar4[-8] = uVar1;
      puVar3 = puVar3 + -0xb;
      puVar4 = puVar4 + -0xb;
    } while (param_2 != param_1);
    *in_EAX = param_3;
    return;
  }
  *in_EAX = param_3;
  return;
}
