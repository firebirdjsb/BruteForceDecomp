/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E28BBD0C1F8C11E9F09A661236C2397299252257F8B42EE338384A638832C1F5
 * Entry: 0x00294bf0, Ghidra index: 9304, label: FUN_00294bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s_internal_array_bigger_than__int__004047c0[];
void FUN_00294bf0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_00469888;
  *(undefined4 *)(DAT_00469888 + 0x68) = 0xfffffffa;
  iVar2 = FUN_00294b10(0x120,s_internal_array_bigger_than__int__004047c0);
  *(int *)(iVar1 + 100) = iVar2;
  iVar2 = *(int *)(DAT_00469888 + 0x68);
  if (iVar2 < 1) {
    iVar5 = iVar2 * -0x120;
    iVar2 = 1 - iVar2;
    do {
      iVar4 = 0x12;
      iVar3 = iVar5;
      do {
        *(undefined4 *)(iVar3 + *(int *)(iVar1 + 100)) = 0xfffffffa;
        iVar3 = iVar3 + 0x10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar5 = iVar5 + -0x120;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
