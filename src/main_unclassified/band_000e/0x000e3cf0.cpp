/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD56A1A49EB7531D0C10A8BBFC9D46272B058FB63A0B18D27311AA501911B2DF
 * Entry: 0x000e3cf0, Ghidra index: 2831, label: FUN_000e3cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039efb4;
void FUN_000e3cf0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_4 [4];
  
  *in_ECX = PTR_FUN_0039efb4;
  if ((int *)in_ECX[2] == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)in_ECX[2];
  }
  if (iVar3 != in_ECX[2]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar3 + 8));
  }
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[2]);
}
