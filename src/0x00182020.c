/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B5A65D401965EE19BB0ED636BEE9EB8A00F81C6CD09041F4B0FE68E00462710
 * Entry: 0x00182020, Ghidra index: 5170, label: FUN_00182020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00399bf0;
undefined4 FUN_00182020(int param_1,undefined4 *param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  
  iVar2 = FUN_00181560();
  if (iVar2 != 0) {
    iVar2 = 2;
    if (extraout_ECX != -1) {
      iVar2 = extraout_ECX + -1;
    }
    param_1 = param_1 + iVar2 * 0xc;
    if (param_1 != 0) {
      for (uVar3 = (uint)param_2 & 0xff; uVar3 != 0; uVar3 = uVar3 - 1) {
        iVar2 = FUN_002ea01d(0x78);
        if (iVar2 == 0) {
          param_2 = (undefined4 *)0x0;
        }
        else {
          param_2 = (undefined4 *)FUN_001815b0();
          *param_2 = &PTR_FUN_00399bf0;
          param_2[0x1d] = 0;
          param_2[0x1a] = 0;
          param_2[0x1c] = 0;
          *(byte *)(param_2 + 0x1b) = *(byte *)(param_2 + 0x1b) & 0xfe;
        }
        cVar1 = FUN_00181770();
        if (cVar1 != '\0') {
          iVar2 = *(int *)(param_1 + 4);
          iVar4 = FUN_000ff730(param_1,iVar2,*(undefined4 *)(iVar2 + 4),&param_2);
          FUN_000b2a50();
          *(int *)(iVar2 + 4) = iVar4;
          **(int **)(iVar4 + 4) = iVar4;
        }
      }
      return 1;
    }
  }
  return 0;
}
