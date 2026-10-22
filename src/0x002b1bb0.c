/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5C355BAE2FBFD84C4161B00DBB7FF50F9C279CD9D73CBAEDB71271A19D3B699
 * Entry: 0x002b1bb0, Ghidra index: 9743, label: FUN_002b1bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_00402a4c;
void FUN_002b1bb0(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  
  if (PTR_DAT_00402a4c != (undefined *)0x0) {
    ppuVar3 = &PTR_DAT_00402a4c;
    do {
      iVar2 = FUN_002b1bf0(*(undefined4 *)(*ppuVar3 + 8));
      if (iVar2 < 0) {
        return;
      }
      ppuVar1 = ppuVar3 + 1;
      ppuVar3 = ppuVar3 + 1;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  return;
}
