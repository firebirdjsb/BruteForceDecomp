/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5F9B0E315C523418A4F1FF0C082A2B5A9D0002275A4C75AB5D8CEDB7D9EE4D81
 * Entry: 0x00154e50, Ghidra index: 4453, label: FUN_00154e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039afb4;
extern uint32_t PTR_LAB_0039afb0;
void FUN_00154e50(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  *in_ECX = &PTR_FUN_0039afb4;
  in_ECX[6] = &PTR_LAB_0039afb0;
  in_ECX[0x32] = 0;
  puVar1 = (undefined4 *)in_ECX[0x52];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x52]);
}
