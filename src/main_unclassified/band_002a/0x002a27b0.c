/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 875089D09F83152FD867F52B4CE000A053CF6BC86B0B0A1006B99F2AA9891F73
 * Entry: 0x002a27b0, Ghidra index: 9522, label: FUN_002a27b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a27b0(undefined4 param_1,undefined4 param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  *(undefined4 *)(in_EAX + 8) = *in_ECX;
  *(undefined4 *)(in_EAX + 0xc) = uVar2;
  *(undefined4 *)(in_EAX + 0x10) = uVar1;
  uVar1 = in_ECX[5];
  uVar2 = in_ECX[4];
  *(undefined4 *)(in_EAX + 0x14) = in_ECX[3];
  *(undefined4 *)(in_EAX + 0x18) = uVar2;
  *(undefined4 *)(in_EAX + 0x1c) = uVar1;
  *(undefined4 *)(in_EAX + 0x20) = param_2;
  *(float *)(in_EAX + 0x24) = param_3;
  *(undefined4 *)(in_EAX + 0x44) = param_1;
  *(float *)(in_EAX + 0x40) = 1.0 / param_3;
  return;
}
