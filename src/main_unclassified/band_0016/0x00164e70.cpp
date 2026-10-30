/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC7768A59B343FA510B95935123B8BAEC067E8FC0A613F652D838301D2D6D7E3
 * Entry: 0x00164e70, Ghidra index: 4690, label: FUN_00164e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00164e70(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  uVar1 = *in_EDX;
  uVar2 = in_EDX[1];
  uVar3 = in_EDX[2];
  uVar4 = in_EDX[3];
  uVar5 = in_EDX[4];
  *in_EDX = *in_EAX;
  in_EDX[1] = in_EAX[1];
  in_EDX[2] = in_EAX[2];
  in_EDX[3] = in_EAX[3];
  in_EDX[4] = in_EAX[4];
  *in_EAX = uVar1;
  in_EAX[1] = uVar2;
  in_EAX[2] = uVar3;
  in_EAX[3] = uVar4;
  in_EAX[4] = uVar5;
  return;
}
