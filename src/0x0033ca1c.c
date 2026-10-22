/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 123E3C531CDBB1CEEF45676151CC1787C39C3EC0E9D8DDA5B7BC417DA9509E3B
 * Entry: 0x0033ca1c, Ghidra index: 12564, label: FUN_0033ca1c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0948;
extern uint32_t DAT_004b0950;
void FUN_0033ca1c(void)

{
  int *in_ECX;
  int iVar1;
  uint uVar2;
  
  iVar1 = in_ECX[7];
  if (*(ushort *)(&DAT_004b0950 + *in_ECX * 10) != 0) {
    uVar2 = *(ushort *)(&DAT_004b0950 + *in_ECX * 10) + 2;
    if (uVar2 % 500 != 0) {
      uVar2 = (uVar2 / 500 + 1) * 500;
    }
    iVar1 = iVar1 + *(ushort *)(&DAT_004b0948 + *in_ECX * 10) * uVar2;
  }
  FUN_0033bfe2(iVar1);
  return;
}
