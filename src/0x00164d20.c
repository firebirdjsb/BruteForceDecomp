/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E81AA46F765F51046E9D5FCC087B5A487C27AFFE93BF66CF4C6CA1E4A17FA62A
 * Entry: 0x00164d20, Ghidra index: 4688, label: FUN_00164d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00164d20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = *in_ECX;
  uVar2 = in_ECX[3];
  uVar3 = in_ECX[4];
  uVar4 = in_ECX[5];
  uVar5 = in_ECX[1];
  uVar6 = in_ECX[2];
  *in_ECX = *in_EAX;
  in_ECX[1] = in_EAX[1];
  in_ECX[2] = in_EAX[2];
  in_ECX[3] = in_EAX[3];
  in_ECX[4] = in_EAX[4];
  in_ECX[5] = in_EAX[5];
  *in_EAX = uVar1;
  in_EAX[1] = uVar5;
  in_EAX[2] = uVar6;
  in_EAX[3] = uVar2;
  in_EAX[4] = uVar3;
  in_EAX[5] = uVar4;
  return;
}
