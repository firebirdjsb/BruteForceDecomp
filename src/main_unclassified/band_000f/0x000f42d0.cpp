/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06D8CF7868F66EF534CCC0A577065A782D1D54C914E7CEC65220FFCC39FE022C
 * Entry: 0x000f42d0, Ghidra index: 3060, label: FUN_000f42d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
void FUN_000f42d0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(int *)(DAT_0046995c + 0x1c) != 0) &&
     ((cVar1 = FUN_002e5880(), cVar1 != '\0' ||
      (iVar2 = FUN_002e5bf0(0), *(int *)(iVar2 + 0x2c) == 0)))) {
    FUN_001ece40(param_2);
  }
  return;
}
