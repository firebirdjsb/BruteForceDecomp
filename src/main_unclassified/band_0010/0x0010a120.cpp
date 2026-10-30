/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D45DD488948E80995D23BE481CDE96F8C76F33D2009B320457792E9A75F78CF
 * Entry: 0x0010a120, Ghidra index: 3421, label: FUN_0010a120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e0c0;
void FUN_0010a120(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  *in_ECX = &PTR_FUN_0039e0c0;
  FUN_0010a740(in_ECX);
  if (in_ECX[0x29] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x29]);
  }
  in_ECX[0x28] = 0;
  puVar1 = (undefined4 *)in_ECX[0x20];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x20]);
}
