/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF2F72C9C06FA9914B768969A9C0D89DFBFB51212DE0C6F52156F38E82D8D06E
 * Entry: 0x0033bed7, Ghidra index: 12539, label: FUN_0033bed7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0950;
undefined4 FUN_0033bed7(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  uint uVar3;
  
  uVar1 = in_ECX[0x211];
  if (uVar1 < *(uint *)in_ECX[5]) {
    uVar3 = *(ushort *)(&DAT_004b0950 + *in_ECX * 10) + 2;
    uVar2 = uVar3;
    if (uVar3 % 500 != 0) {
      uVar2 = (uVar3 / 500 + 1) * 500;
    }
    uVar2 = uVar1 * uVar2 + in_ECX[7];
    if (uVar3 % 500 != 0) {
      uVar3 = (uVar3 / 500 + 1) * 500;
    }
    uVar3 = (uVar3 - 1) + uVar2;
    in_ECX[0x20b] = uVar2 / 500;
    in_ECX[0x20c] = uVar2 % 500;
    in_ECX[0x20a] = (uVar3 - uVar2) + 1;
    in_ECX[0x20d] = uVar3 / 500;
    in_ECX[0x209] = uVar1;
    in_ECX[0x20e] = uVar3 % 500;
    return 1;
  }
  return 0;
}
