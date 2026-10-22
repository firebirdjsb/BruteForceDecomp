/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2245DF7F616459389698FBB569518864977346F661693D0023E18C9A0E2EF3B2
 * Entry: 0x0024a600, Ghidra index: 8211, label: FUN_0024a600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024a600(void)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - iVar2;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar2;
    }
    FUN_00071d20(*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&stack0x00000004);
    return;
  }
  if ((iVar2 != 0) && (in_EAX < (uint)(*(int *)(in_ECX + 8) - iVar2))) {
    FUN_00071ce0(in_ECX,*(int *)(in_ECX + 4) + in_EAX,*(int *)(in_ECX + 8));
  }
  return;
}
