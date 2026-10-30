/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE5B6CD0F13C235F06B98B93ADAD9A224B85A42B64281BF19F5E704DDFF4538E
 * Entry: 0x00312e3a, Ghidra index: 11984, label: FUN_00312e3a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003869a0;
void FUN_00312e3a(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  puVar1 = in_ECX + 5;
  in_ECX[1] = 1;
  *in_ECX = &PTR_FUN_003869a0;
  in_ECX[6] = puVar1;
  *puVar1 = puVar1;
  uVar2 = FUN_00316bf2(param_1);
  in_ECX[2] = uVar2;
  return;
}
