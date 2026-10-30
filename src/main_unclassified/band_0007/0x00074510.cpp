/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE491F0C55DBB20C4E8E61179612C4E8E531A9558CECBAF746A7744C992E4E1B
 * Entry: 0x00074510, Ghidra index: 1323, label: FUN_00074510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined1 FUN_000745e0(int param_1);

extern uint32_t PTR_FUN_003a25e0;
void FUN_00074510(void)

{
  undefined4 *in_ECX;
  undefined1 local_4 [4];
  
  *in_ECX = PTR_FUN_003a25e0;
  FUN_000745e0(in_ECX);
  FUN_00075cb0(local_4,*(undefined4 *)in_ECX[10],(undefined4 *)in_ECX[10]);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[10]);
}
