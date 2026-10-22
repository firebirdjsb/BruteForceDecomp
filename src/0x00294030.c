/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 065B5D8FCAAAD9D9C88E2FC10386A536F1E911B792C8503E0BB15653021EF6F7
 * Entry: 0x00294030, Ghidra index: 9276, label: FUN_00294030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_00294030(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_00469888;
  iVar5 = 0;
  if (0 < *(int *)(DAT_00469888 + 0x70)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(iVar2 + 0x6c);
      puVar3 = (undefined4 *)(iVar1 + iVar4);
      if (*(int *)(iVar1 + 0x10 + iVar4) == 1) {
        switch(*puVar3) {
        case 0xfffffff9:
        case 0xfffffffc:
        case 0xfffffffd:
        case 0xfffffffe:
        case 0:
          if (*(int *)(puVar3[2] + 4) == 0) {
            puVar3[4] = 3;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar5 < *(int *)(iVar2 + 0x70));
  }
  return;
}
