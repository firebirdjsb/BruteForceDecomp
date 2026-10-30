/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A0BFD0FF2FAB8C9440E2BBAFDA40EE40B0CF9BB0D8BD9E9990137837AD8F742
 * Entry: 0x002ac100, Ghidra index: 9666, label: FUN_002ac100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_someone_is_using_get_string_0040dbb4[];
undefined4 FUN_002ac100(int param_1,undefined4 **param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iStack_c4;
  undefined4 **ppuStack_c0;
  int **ppiStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 **ppuStack_b0;
  char **ppcStack_ac;
  undefined4 **ppuStack_a8;
  int **ppiStack_a4;
  int *piStack_a0;
  undefined4 ***pppuStack_9c;
  undefined4 **ppuStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 **ppuStack_8c;
  undefined4 **ppuStack_88;
  char **ppcStack_84;
  undefined4 uStack_80;
  int *piStack_7c;
  char *pcStack_78;
  int *piStack_74;
  undefined4 **ppuStack_70;
  int iStack_6c;
  char *pcStack_68;
  int iStack_64;
  undefined4 **ppuStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_38 [13];
  
  uStack_54 = 0;
  uStack_58 = 4;
  puStack_5c = local_38;
  ppuStack_60 = param_2;
  local_38[0] = 0x3f8ccccd;
  iStack_64 = 0x2ac126;
  (*(code *)(*param_2)[5])();
  iStack_64 = 0;
  pcStack_68 = (char *)0x4;
  iStack_6c = param_1 + 0x18;
  ppuStack_70 = param_2;
  piStack_74 = (int *)0x2ac137;
  (*(code *)(*param_2)[5])();
  for (puStack_5c = *(undefined4 **)(param_1 + 0x10); iVar3 = 0, puStack_5c != (undefined4 *)0x0;
      puStack_5c = (undefined4 *)*puStack_5c) {
    piVar2 = (int *)puStack_5c[2];
    pcStack_78 = (char *)0x2ac153;
    piStack_74 = piVar2;
    (**(code **)(*piVar2 + 0x14))();
    pcStack_78 = s_someone_is_using_get_string_0040dbb4;
    piStack_7c = (int *)0x2ac15d;
    XAPILIB__OutputDebugStringA();
    pcStack_68 = (char *)0x0;
    do {
      cVar1 = *pcStack_68;
      pcStack_68 = pcStack_68 + 1;
    } while (cVar1 != '\0');
    piStack_7c = (int *)0x0;
    uStack_80 = 2;
    ppcStack_84 = &pcStack_68;
    ppuStack_88 = param_2;
    ppuStack_8c = (undefined4 **)0x2ac17e;
    (*(code *)(*param_2)[5])();
    uStack_90 = (uint)pcStack_78 & 0xffff;
    ppuStack_8c = (undefined4 **)0x0;
    uStack_94 = 0;
    ppuStack_98 = param_2;
    pppuStack_9c = (undefined4 ***)0x2ac18c;
    (*(code *)(*param_2)[5])();
    if (((uint)ppuStack_88 & 1) != 0) {
      pppuStack_9c = (undefined4 ***)0x0;
      piStack_a0 = (int *)0x1;
      ppiStack_a4 = &piStack_7c;
      ppuStack_a8 = param_2;
      piStack_7c = (int *)0x0;
      ppcStack_ac = (char **)0x2ac1a5;
      (*(code *)(*param_2)[5])();
    }
    pppuStack_9c = &ppuStack_70;
    ppiStack_a4 = (int **)0x2ac1b0;
    piStack_a0 = piVar2;
    (**(code **)(*piVar2 + 0x48))();
    ppiStack_a4 = (int **)0x0;
    ppuStack_a8 = (undefined4 **)0xc;
    ppcStack_ac = &pcStack_78;
    ppuStack_b0 = param_2;
    uStack_b4 = 0x2ac1be;
    (*(code *)(*param_2)[5])();
    uStack_b4 = 0;
    uStack_b8 = 4;
    ppiStack_bc = &piStack_7c;
    ppuStack_c0 = param_2;
    iStack_c4 = 0x2ac1cc;
    (*(code *)(*param_2)[5])();
    iStack_c4 = 0x2ac1d3;
    uStack_b4 = (**(code **)(*piVar2 + 0x2c))();
    iStack_c4 = 0;
    (*(code *)(*param_2)[5])(param_2,&uStack_b4,4);
    if (0 < iStack_c4) {
      do {
        (**(code **)(*piVar2 + 0x34))(piVar2,iVar3,&ppuStack_98);
        (*(code *)(*param_2)[5])(param_2,&ppiStack_a4,0x10,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iStack_c4);
    }
    iStack_c4 = (**(code **)(*piVar2 + 0x30))();
    (*(code *)(*param_2)[5])(param_2,&iStack_c4,4,0);
    pcVar4 = (char *)0x0;
    if (0 < iStack_64) {
      do {
        /* XBE 0x002AC23A and 0x002AC24A address the same eight guest
         * bytes: B+0x20 (local_38[2..3]), where B is ESP after PUSH EDI.
         * 0x002AC11B anchors local_38[0] at B+0x18. The virtual +0x38
         * implementation remains unverified; this binds only the caller's
         * exact output slot and its subsequent eight-byte stream write. */
        piStack_74 = (int *)&local_38[2];
        uStack_80 = 0x2ac244;
        piStack_7c = piVar2;
        pcStack_78 = pcVar4;
        (**(code **)(*piVar2 + 0x38))(piVar2,(uint)pcVar4,&local_38[2]);
        uStack_80 = 0;
        ppcStack_84 = (char **)0x8;
        ppuStack_88 = (undefined4 **)&local_38[2];
        ppuStack_8c = param_2;
        uStack_90 = 0x2ac253;
        (*(code *)(*param_2)[5])(param_2,&local_38[2],8,0);
        pcVar4 = pcVar4 + 1;
      } while ((int)pcVar4 < iStack_64);
    }
  }
  return 0;
}
