/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5CB8864F4EFAA8050761B3C9F5CF50965BB08F3B038B8A5A218884CF05A46D0
 * Entry: 0x000908f0, Ghidra index: 1775, label: FUN_000908f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bb5b0;
extern uint32_t DAT_003bb5bc;
extern uint32_t PTR_s_R8G8B8_003bb5a8;
undefined4 FUN_000908f0(void)

{
  int iVar1;
  int *in_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_003bb5b0 != -1) {
    puVar2 = &DAT_003bb5b0;
    iVar1 = DAT_003bb5b0;
    do {
      if (iVar1 == *in_ECX) break;
      iVar1 = puVar2[0x18];
      puVar2 = puVar2 + 0x18;
      iVar3 = iVar3 + 1;
    } while (iVar1 != -1);
  }
  return CONCAT31((int3)((uint)(&PTR_s_R8G8B8_003bb5a8 + iVar3 * 0x18) >> 8),
                  (&DAT_003bb5bc)[iVar3 * 0x60]);
}
