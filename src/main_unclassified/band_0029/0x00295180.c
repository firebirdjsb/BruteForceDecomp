/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F67F8A1FA9FDF086F2B5616839B8FF44090D99C7063031EC510B3999E3DD71E
 * Entry: 0x00295180, Ghidra index: 9310, label: FUN_00295180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern uint32_t PTR_s_gettable_003b9690;
undefined * FUN_00295180(code *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar1 = DAT_00469888;
  do {
    if (*(int *)(iVar1 + 0x68) < 1) {
      iVar3 = iVar2 << 4;
      iVar4 = 0;
      do {
        iVar1 = (*param_1)(*(int *)(iVar1 + 100) + iVar3);
        if (iVar1 != 0) {
          return (&PTR_s_gettable_003b9690)[iVar2];
        }
        iVar4 = iVar4 + -1;
        iVar3 = iVar3 + 0x120;
        iVar1 = DAT_00469888;
      } while (*(int *)(DAT_00469888 + 0x68) <= iVar4);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x12);
  return (undefined *)0x0;
}
