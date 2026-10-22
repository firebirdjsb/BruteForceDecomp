/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6CB27A737A97EC9890BC2C0A724032EF238261341607A23BB042AB2CC5D132EC
 * Entry: 0x000c1f50, Ghidra index: 2363, label: FUN_000c1f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f62c;
extern uint32_t PTR_LAB_0039f618;
void FUN_000c1f50(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  *in_ECX = &PTR_FUN_0039f62c;
  in_ECX[0xb] = &PTR_LAB_0039f618;
  puVar1 = (undefined4 *)in_ECX[0x1a];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x1a]);
}
