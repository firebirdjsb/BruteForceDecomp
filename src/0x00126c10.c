/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 782B57DBB5992EC7B8F3F8FD02634A4F15804A92EF5DA7862746D5239D484CFA
 * Entry: 0x00126c10, Ghidra index: 3726, label: FUN_00126c10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003f7f1c;
undefined4 FUN_00126c10(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_ECX;
  
  uVar2 = FUN_0006e6b0(DAT_003f7f1c,&LAB_0014f480,in_ECX);
  if ((uVar2 & 1) != 0) {
    cVar1 = FUN_00126bc0(param_1);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}
