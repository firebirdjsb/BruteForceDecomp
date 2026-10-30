/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A54ED15EE51CCE1699848FB1A57029CCB65C125BE509AFCE2741FDE59E9CED6D
 * Entry: 0x0025e6d0, Ghidra index: 8597, label: FUN_0025e6d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025e6d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  *in_EAX = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *in_EAX = *param_1;
  uVar1 = in_EAX[2];
  in_EAX[2] = *(undefined4 *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 4) = uVar1;
  uVar1 = in_EAX[3];
  in_EAX[3] = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 8) = uVar1;
  uVar1 = in_EAX[4];
  in_EAX[4] = *(undefined4 *)(in_ECX + 0xc);
  *(undefined4 *)(in_ECX + 0xc) = uVar1;
  return;
}
