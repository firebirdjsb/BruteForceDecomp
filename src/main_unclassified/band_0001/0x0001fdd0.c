/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13832B0FFE3CCB2E86EC5E06B944B7E16DDDFE35C04F722A781393BBBEECF49F
 * Entry: 0x0001fdd0, Ghidra index: 164, label: FUN_0001fdd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001fdd0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x20);
  uVar2 = *(undefined4 *)(in_ECX + 0x14);
  *in_EAX = *(undefined4 *)(in_ECX + 8);
  in_EAX[1] = uVar2;
  in_EAX[2] = uVar1;
  return;
}
