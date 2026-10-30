/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED3F2BFFB20670979561DBA8E47AEF195C1BF7453BD264012DC66976AF46E016
 * Entry: 0x001cef50, Ghidra index: 6086, label: FUN_001cef50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cef50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  if (param_1 != param_2) {
    puVar3 = param_1 + 7;
    do {
      *param_1 = *in_ECX;
      puVar3[-6] = in_ECX[1];
      puVar3[-5] = in_ECX[2];
      puVar3[-4] = in_ECX[3];
      puVar3[-3] = in_ECX[4];
      uVar1 = in_ECX[7];
      uVar2 = in_ECX[6];
      puVar3[-2] = in_ECX[5];
      puVar3[-1] = uVar2;
      *puVar3 = uVar1;
      uVar1 = in_ECX[10];
      uVar2 = in_ECX[9];
      puVar3[1] = in_ECX[8];
      puVar3[2] = uVar2;
      puVar3[3] = uVar1;
      param_1 = param_1 + 0xb;
      puVar3 = puVar3 + 0xb;
    } while (param_1 != param_2);
  }
  return;
}
