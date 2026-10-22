/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 428C8CD85462E8569114C43B1BBA46DD2E68BC315EFD863D82FE0BE6CF32B7CF
 * Entry: 0x001b3280, Ghidra index: 5637, label: FUN_001b3280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b3280(void)

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
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x50;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x50;
    }
    FUN_001bdef0(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&stack0x00000004);
    FUN_0006a3d0();
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x50)) {
      FUN_001bde90(in_ECX,local_4,in_EAX * 0x50 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  FUN_0006a3d0();
  return;
}
