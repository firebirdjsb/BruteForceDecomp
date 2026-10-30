/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7A64AFAA7EA767A476F044DFEC2A3C8B9DEBEB9F3D44F561E2759844265C32D
 * Entry: 0x000addf0, Ghidra index: 2080, label: FUN_000addf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a006c;
void FUN_000addf0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  *in_ECX = PTR_FUN_003a006c;
  puVar1 = (undefined4 *)in_ECX[0x10];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
  if (in_ECX[0x13] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x13]);
  }
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  FUN_000b1670(local_4,*(undefined4 *)in_ECX[0x1f],(undefined4 *)in_ECX[0x1f]);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x1f]);
}
