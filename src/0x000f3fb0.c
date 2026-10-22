/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EFE5F1153CD35795437D100D2B6A7F7FBE3D0AF22D76D725AA082B8050794C64
 * Entry: 0x000f3fb0, Ghidra index: 3057, label: FUN_000f3fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
uint FUN_000f3fb0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *unaff_EBX;
  int iVar6;
  
  *unaff_EBX = 0;
  piVar1 = (int *)FUN_00103000();
  puVar3 = *(undefined4 **)(param_1 + 0x240);
  puVar2 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar3;
  }
  if (puVar2 != puVar3) {
    do {
      if (puVar2[2] == *piVar1) break;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != puVar3);
    if (puVar2 != puVar3) {
      iVar6 = 1;
      do {
        puVar3 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1a4))(iVar6);
        if (puVar3 == (undefined4 *)0x0) break;
        if (puVar3[0x16] == *piVar1) {
          *(undefined4 *)(param_1 + 0x248) = *puVar3;
          goto LAB_000f4021;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x20);
      *(undefined4 *)(param_1 + 0x248) = 0;
LAB_000f4021:
      uVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x268))();
      if (9 < uVar4) {
        uVar4 = FUN_000f3d40();
        return uVar4;
      }
      uVar4 = FUN_00102250();
      goto LAB_000f403f;
    }
  }
  puVar3 = (undefined4 *)FUN_00103000();
  iVar6 = DAT_00469b58;
  *(undefined4 *)(param_1 + 0x10) = *puVar3;
  uVar4 = (**(code **)(**(int **)(iVar6 + 8) + 0x1bc))(puVar3);
  if ((char)uVar4 != '\0') {
    pcVar5 = (char *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0xcc))();
    iVar6 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1c4))();
    if (((iVar6 != 0) && (*(int *)(iVar6 + 0x48) < 2)) && (*pcVar5 == '\0')) {
      iVar6 = _wcscmp((wchar_t *)(iVar6 + 8),u_VENGAR_0040cd64);
      if (iVar6 != 0) {
        *unaff_EBX = 1;
        uVar4 = FUN_000f4200(param_1);
        return uVar4;
      }
    }
    piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
                    /* WARNING: Could not recover jumptable at 0x000f40f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*piVar1 + 4))();
    return uVar4;
  }
LAB_000f403f:
  return uVar4 & 0xffffff00;
}
