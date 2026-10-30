/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 94203D890D1D27EFE4D5B979E7297A48BBD6DFA1E52B8CB868DE5CBED4213439
 * Entry: 0x00040f10, Ghidra index: 488, label: FUN_00040f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00040f10(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_EAX + 3) = 1;
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  *in_EAX = *in_ECX;
  in_EAX[1] = uVar2;
  in_EAX[2] = uVar1;
  return;
}
