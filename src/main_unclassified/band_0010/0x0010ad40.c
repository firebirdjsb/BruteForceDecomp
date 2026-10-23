/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD83FFF06C584B6E818F4135802B5019CDA44878BEF3D852C477234F4C3EA2A2
 * Entry: 0x0010ad40, Ghidra index: 3436, label: FUN_0010ad40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010ad40(int param_1)

{
  int iVar1;
  int *in_EAX;
  undefined4 uVar2;
  int in_EDX;
  
  iVar1 = *in_EAX;
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x98) = iVar1;
  }
  if (in_EDX == 0) {
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    *(int *)(param_1 + 0x9c) = in_EDX;
  }
  uVar2 = FUN_000cd9c0();
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  return;
}
