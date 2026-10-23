/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7E204D68CF3E47BF85CE40A534C2FE0CD8576A18B5A80D0DAD838C6F40D2DF3
 * Entry: 0x0028afb0, Ghidra index: 9177, label: FUN_0028afb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00404a84;
void FUN_0028afb0(void)

{
  undefined *in_EAX;
  int in_ECX;
  undefined1 local_118 [8];
  undefined1 *local_110;
  undefined4 local_10c;
  undefined *local_108;
  
  if (in_EAX == (undefined *)0x0) {
    in_EAX = &DAT_00404a84;
  }
  if (in_ECX != 0) {
    local_110 = &LAB_0029c4d0;
    local_10c = 0;
    local_108 = in_EAX;
  }
  FUN_0028ad80(local_118);
  return;
}
