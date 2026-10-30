/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D38550BBE0BE368E82C97AAEF657EFAEDA80F2572F357ED98A8CD60F733D6217
 * Entry: 0x00243cb0, Ghidra index: 8062, label: FUN_00243cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00243cb0(void)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  undefined4 in_stack_0000001c;
  uint in_stack_00000030;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x38;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x38;
    }
    FUN_00247320(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x38)) {
      FUN_002472d0(local_4,in_EAX * 0x38 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  if (0xf < in_stack_00000030) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_stack_0000001c);
  }
  return;
}
