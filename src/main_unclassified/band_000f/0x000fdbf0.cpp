/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B98C097C7C0DDB341DA2035BAC78D563422F9F4F2EC1A83A29EC05244805EB06
 * Entry: 0x000fdbf0, Ghidra index: 3176, label: FUN_000fdbf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D direct/indirect guest32 allocator boundary:
 * one source size DWORD and 32-bit EAX result. Guest-memory ABI unverified. */
#include "bf_002ea01d_allocator_guest32.h"
void FUN_000fdbf0(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_ESI;
  undefined4 local_34 [5];
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (in_EAX != 0) {
    if (*unaff_ESI == 0) {
      local_34[0] = 0;
      local_20 = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      iVar1 = FUN_002ea01d(0x34);
      if (iVar1 != 0) {
        FUN_000fdc90(local_34);
        *(undefined4 *)(iVar1 + 0x28) = local_c;
        *(undefined4 *)(iVar1 + 0x2c) = local_8;
        *(undefined4 *)(iVar1 + 0x30) = local_4;
        *unaff_ESI = iVar1;
        FUN_0006a470();
        return;
      }
      *unaff_ESI = 0;
      FUN_0006a470();
    }
    return;
  }
  iVar1 = *unaff_ESI;
  if (iVar1 != 0) {
    FUN_0006a470();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  *unaff_ESI = 0;
  return;
}
