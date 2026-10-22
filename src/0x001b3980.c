/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9559924D4C8FEE128DC0DE3357840169F57A088622F31AE4623A086B529C4133
 * Entry: 0x001b3980, Ghidra index: 5647, label: FUN_001b3980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b3980(void)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x44;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x44;
    }
    FUN_001bf560(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
    FUN_00132d60();
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x44)) {
      FUN_001bf4c0(local_4,in_EAX * 0x44 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  FUN_00132d60();
  return;
}
