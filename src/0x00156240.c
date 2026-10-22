/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 516F01CF374EF09A5717954E0AFFCF224723F5F88571A1F73DAF4DA82AF4670C
 * Entry: 0x00156240, Ghidra index: 4473, label: FUN_00156240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003f7f1c;
uint FUN_00156240(void)

{
  uint uVar1;
  undefined4 in_ECX;
  
  uVar1 = FUN_0006e6b0(DAT_003f7f1c,&LAB_0014f480,in_ECX);
  return uVar1 & 1;
}
