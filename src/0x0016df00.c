/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 85748E0FAB1CE2EA5588742A7EE8C801A5C74424DBB9E24A81DCD1725E1EB4A6
 * Entry: 0x0016df00, Ghidra index: 4807, label: FUN_0016df00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016df00(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    uVar1 = in_ECX[3];
    uVar2 = in_ECX[2];
    uVar3 = in_ECX[1];
    *in_EAX = *in_ECX;
    in_EAX[1] = uVar3;
    in_EAX[2] = uVar2;
    in_EAX[3] = uVar1;
    in_EAX[4] = in_ECX[4];
  }
  return;
}
