/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A130230EB34A7A0625A68B8DC3F50EC392212954BC825FD986866137C7B6BE1
 * Entry: 0x003815c9, Ghidra index: 13569, label: FUN_003815c9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038631c;
void FUN_003815c9(void)

{
  int *in_ECX;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar2 = 0;
  if (in_ECX[1] != 0) {
    do {
      puVar4 = (undefined4 *)(*in_ECX + uVar2);
      uVar2 = uVar2 + 0x1000;
      puVar3 = &DAT_0038631c;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    } while (uVar2 < (uint)in_ECX[1]);
  }
  return;
}
