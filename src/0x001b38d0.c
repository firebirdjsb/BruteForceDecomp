/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53DBA20A3F3E74473602DFD5BA9A44B558C3F0857A2E35AE2DAB50D22BA1A01E
 * Entry: 0x001b38d0, Ghidra index: 5646, label: FUN_001b38d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b38d0(void)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(int *)(in_ECX + 8) - iVar1) / 0x14;
  }
  if (uVar2 < in_EAX) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar1) / 0x14;
    }
    FUN_0001c630(*(undefined4 *)(in_ECX + 8),in_EAX - iVar1);
    return;
  }
  if (iVar1 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar1) / 0x14)) {
      FUN_002633d0(in_ECX,&stack0x00000004,*(int *)(in_ECX + 4) + in_EAX * 0x14,*(int *)(in_ECX + 8)
                  );
    }
  }
  return;
}
