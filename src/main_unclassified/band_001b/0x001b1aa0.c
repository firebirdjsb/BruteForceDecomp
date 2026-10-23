/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5AF159D80B27D6057C8FBEE1CC31FE1F616DB8744CE7899AD2DDD49357AB175
 * Entry: 0x001b1aa0, Ghidra index: 5609, label: FUN_001b1aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b1aa0(void)

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
    uVar2 = (*(int *)(in_ECX + 8) - iVar1) / 0x28;
  }
  if (uVar2 < in_EAX) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar1) / 0x28;
    }
    FUN_0008ee10(*(undefined4 *)(in_ECX + 8),in_EAX - iVar1);
    return;
  }
  if (iVar1 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar1) / 0x28)) {
      FUN_001b6d40(in_ECX,&stack0x00000004,*(int *)(in_ECX + 4) + in_EAX * 0x28,*(int *)(in_ECX + 8)
                  );
    }
  }
  return;
}
