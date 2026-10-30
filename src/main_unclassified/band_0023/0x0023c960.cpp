/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF33C506B260A67151A858D21C5FD5FDCD0E51587F265C95EC5FF322F20D469B
 * Entry: 0x0023c960, Ghidra index: 7935, label: FUN_0023c960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023c960(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *in_EAX = *in_ECX;
  in_EAX[1] = in_ECX[1];
  uVar1 = in_ECX[4];
  uVar2 = in_ECX[3];
  in_EAX[2] = in_ECX[2];
  in_EAX[3] = uVar2;
  in_EAX[4] = uVar1;
  uVar1 = in_ECX[8];
  uVar2 = in_ECX[7];
  uVar3 = in_ECX[6];
  in_EAX[5] = in_ECX[5];
  in_EAX[6] = uVar3;
  in_EAX[7] = uVar2;
  in_EAX[8] = uVar1;
  uVar1 = in_ECX[0xb];
  uVar2 = in_ECX[10];
  in_EAX[9] = in_ECX[9];
  in_EAX[10] = uVar2;
  in_EAX[0xb] = uVar1;
  in_EAX[0xc] = in_ECX[0xc];
  in_EAX[0xd] = in_ECX[0xd];
  return;
}
