/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0723BBA9307522B717A5D6AA6775DD360D6FCF2E639A9A113C20789FC8610551
 * Entry: 0x000de780, Ghidra index: 2717, label: FUN_000de780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
undefined4 FUN_000de780(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  int local_10;
  uint local_c;
  
  bVar8 = false;
  piVar4 = (int *)0x0;
  if (*(undefined4 **)(param_1 + 0xc28) != (undefined4 *)0x0) {
    piVar4 = (int *)**(undefined4 **)(param_1 + 0xc28);
  }
  uVar7 = local_c;
  if (piVar4 != *(int **)(param_1 + 0xc28)) {
    do {
      puVar1 = (undefined1 *)piVar4[2];
      if (*(int *)(puVar1 + 8) != 1) {
        bVar8 = true;
        uVar7 = 0;
        local_c = 0;
        /* XBE 0x000DE7C6 zeroes [ESP+14h], 0x000DE7CA selects
         * [ESP+10h], and 0x000DE7D1 loads its +4 DWORD.
         * This path reads local_c, not a fabricated host stack pointer.
         * Xbox stack alignment and native ABI remain unverified. */
        iVar2 = local_c;
      }
      else {
        iVar2 = *(int *)(puVar1 + 0x10);
      }
      if (((bVar8) && (bVar8 = false, uVar7 != 0)) && ((uVar7 & 1) == 0)) {
        iVar5 = uVar7 * 0x19660d;
        uVar7 = 0;
        local_c = 0;
        piVar6 = (int *)(&DAT_00414da0 + (iVar5 + 0x3c6ef35fU >> 0x15) * 4);
        if (*(int *)(&DAT_00414da0 + (iVar5 + 0x3c6ef35fU >> 0x15) * 4) != 0) {
          do {
            piVar3 = (int *)*piVar6;
            if (piVar3 == &local_10) {
              *piVar6 = *(int *)*piVar6;
              break;
            }
            piVar6 = piVar3;
          } while (*piVar3 != 0);
          uVar7 = 0;
        }
      }
      if ((iVar2 == param_2) && (*(int *)(piVar4[2] + 4) != param_3)) {
        if ((*(byte *)((int *)piVar4[2] + 5) & 1) != 0) {
          (**(code **)(*(int *)piVar4[2] + 0x20))();
          if ((undefined4 *)piVar4[2] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)piVar4[2])(1);
          }
          if (piVar4 != *(int **)(param_1 + 0xc28)) {
            *(int *)piVar4[1] = *piVar4;
            *(int *)(*piVar4 + 4) = piVar4[1];
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(piVar4);
          }
        }
        return 1;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0xc28));
  }
  return 0;
}
