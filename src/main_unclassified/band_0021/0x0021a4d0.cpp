/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C6D09ED192DD4A5EF4EF98806E2C94F2803C5D214F372872FC0D9A113441080
 * Entry: 0x0021a4d0, Ghidra index: 7511, label: FUN_0021a4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394c58;
void FUN_0021a4d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined4 uVar3;
  undefined1 local_4 [4];
  
  *in_ECX = PTR_FUN_00394c58;
  FUN_0021c700();
  if (in_ECX[0x39] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x39]);
  }
  iVar1 = in_ECX[0x3b];
  if (iVar1 != 0) {
    FUN_00219450();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  iVar1 = in_ECX[0x3a];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      FUN_0008f6e0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  FUN_0015b790();
  puVar2 = (undefined4 *)in_ECX[0x3d];
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  FUN_001298b0(local_4,uVar3,puVar2);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x3d]);
}
