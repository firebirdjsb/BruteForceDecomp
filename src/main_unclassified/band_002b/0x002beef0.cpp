/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2B6F6DDE029446F94CEEF227B34C2037AC55A8E882F806EF88F5947A096DDBB
 * Entry: 0x002beef0, Ghidra index: 9986, label: FUN_002beef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002beef0(uint param_1,uint param_2)

{
  uint *puVar1;
  int *in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = FUN_002b2b80();
  iVar4 = 0;
  if (0 < *in_EAX) {
    uVar3 = uVar2;
    while( true ) {
      uVar3 = in_EAX[1] & uVar3;
      puVar1 = (uint *)(in_EAX[3] + uVar3 * 0xc);
      iVar4 = iVar4 + 1;
      if (*(int *)(in_EAX[3] + 8 + uVar3 * 0xc) == 0) break;
      if (((*puVar1 | 0x80000000) == uVar2) && (puVar1[1] == param_1)) {
        puVar1[2] = param_2;
        return;
      }
      uVar3 = uVar3 + 1;
      if (*in_EAX <= iVar4) {
        return;
      }
    }
  }
  return;
}
