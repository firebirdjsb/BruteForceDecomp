/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA97B46FC3ABDBB75D45558754147235927D393CC24B1893AF71289A58B6E5F9
 * Entry: 0x0016e880, Ghidra index: 4823, label: FUN_0016e880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016e880(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  uVar2 = in_ECX[3];
  uVar1 = *in_ECX;
  uVar3 = in_ECX[2];
  uVar4 = in_EAX[3];
  uVar5 = in_ECX[1];
  uVar6 = in_EAX[2];
  uVar7 = in_EAX[1];
  *in_ECX = *in_EAX;
  in_ECX[1] = uVar7;
  in_ECX[2] = uVar6;
  in_ECX[3] = uVar4;
  uVar4 = in_ECX[4];
  in_ECX[4] = in_EAX[4];
  *in_EAX = uVar1;
  in_EAX[1] = uVar5;
  in_EAX[2] = uVar3;
  in_EAX[3] = uVar2;
  in_EAX[4] = uVar4;
  return;
}
