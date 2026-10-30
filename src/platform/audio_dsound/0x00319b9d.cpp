/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B3A107D7CB4D3598DC665F9F034968FE4C44D07AAB5D308057CE57FC9BAAC1C5
 * Entry: 0x00319b9d, Ghidra index: 12246, label: FUN_00319b9d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0032f694;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00319b9d(float param_1)

{
  undefined4 uVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  
  uVar1 = FUN_00319a67(_DAT_0032f694 * param_1);
  *(undefined4 *)(extraout_ECX + 0x1a0) = uVar1;
  uVar1 = FUN_00319a67(_DAT_0032f694 * param_1);
  *(undefined4 *)(extraout_ECX_00 + 0x1a4) = uVar1;
  return;
}
