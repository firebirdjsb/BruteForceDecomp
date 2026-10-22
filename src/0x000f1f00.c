/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D67F95F40DC749ACC019C7D19FCB912057E9F6481FE3A1EF3237B79B5FF468BE
 * Entry: 0x000f1f00, Ghidra index: 3013, label: FUN_000f1f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
bool FUN_000f1f00(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xf4))(local_10,&local_20);
  if (0 < iVar1) {
    do {
      iVar3 = local_14 + iVar2 * 4;
      FUN_001e97c0(iVar3);
      FUN_0010c660(iVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (unaff_EBX == 0) {
    local_20 = 0;
    local_1c = 0;
    if (local_14 == 0) {
      return 0 < iVar1;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_14);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_EBX);
}
