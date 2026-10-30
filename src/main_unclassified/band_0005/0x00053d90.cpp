/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F59617EC2AE4AAD7729DA2357B6B631553714A37F2A94BC9B0C8573F403E951D
 * Entry: 0x00053d90, Ghidra index: 780, label: FUN_00053d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00053d90(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    uVar1 = in_ECX[3];
    uVar2 = in_ECX[2];
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = uVar2;
    in_EAX[3] = uVar1;
    in_EAX[4] = in_ECX[4];
  }
  return;
}
