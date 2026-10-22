/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A48461E76CAB08D93A3DC89FCDB119355B51D94704F330866C9F8389158189CA
 * Entry: 0x001eb060, Ghidra index: 6875, label: FUN_001eb060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004071dc;
extern uint32_t PTR_DAT_004071d8;
extern uint32_t PTR_DAT_004071e0;
undefined * FUN_001eb060(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int in_EDX;
  
  iVar3 = 0;
  puVar2 = (undefined *)0x0;
  if (PTR_DAT_004071d8 != (undefined *)0x0) {
    while ((&DAT_004071dc)[iVar3 * 2] != in_EDX) {
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 + 1;
      if ((&PTR_DAT_004071e0)[iVar1] == (undefined *)0x0) {
        return PTR_DAT_004071d8;
      }
    }
    puVar2 = (&PTR_DAT_004071d8)[iVar3 * 2];
  }
  return puVar2;
}
