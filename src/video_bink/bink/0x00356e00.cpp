/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 612D4DB1297BF2A4B6801048A31781AA9E049FD05644B2859F4D4FF45BD0E7B0
 * Entry: 0x00356e00, Ghidra index: 13147, label: FUN_00356e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004128d8;
void FUN_00356e00(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)&DAT_004128d8 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar2] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}
