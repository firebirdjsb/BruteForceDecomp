/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D59B6CCCC3F10E9EDE1981BC788E2D3D789A01719C0E31F26E8F925145D0D5B
 * Entry: 0x00256c20, Ghidra index: 8445, label: FUN_00256c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00256c20(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int in_ECX;
  int in_EDX;
  
  if ((in_ECX == 0) && (in_ECX = *in_EAX, in_ECX == 0)) {
    *in_EAX = in_EDX;
    *(undefined4 *)(in_EDX + 0xc) = 0;
    *(undefined4 *)(in_EDX + 4) = 0;
    *(undefined4 *)(in_EDX + 8) = 0;
    return;
  }
  *(int *)(in_EDX + 0xc) = in_ECX;
  iVar1 = *(int *)(in_ECX + 0x10);
  if (iVar1 != 0) {
    for (iVar2 = *(int *)(iVar1 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      iVar1 = iVar2;
    }
    *(int *)(iVar1 + 8) = in_EDX;
    *(undefined4 *)(in_EDX + 8) = 0;
    *(int *)(in_EDX + 4) = iVar1;
    return;
  }
  *(int *)(in_ECX + 0x10) = in_EDX;
  return;
}
