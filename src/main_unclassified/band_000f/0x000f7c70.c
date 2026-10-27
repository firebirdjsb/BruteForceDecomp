/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B45DB82AACDE6146D99B320E0B8C30B0473B309A02C8C233833196B4C072C80A
 * Entry: 0x000f7c70, Ghidra index: 3108, label: FUN_000f7c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469ab4;
undefined4 FUN_000f7c70(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  undefined1 *puVar4;
  int *piVar5;
  int iStack_4c;
  undefined1 auStack_48 [36];
  int aiStack_24 [4];
  undefined1 auStack_14 [8];
  undefined1 auStack_c [12];
  
  if ((((param_1 != (int *)0x0) && (param_1[1] != 0)) &&
      (iVar2 = (**(code **)(*param_1 + 4))(), iVar2 == 3)) &&
     ((iVar2 = *(int *)(param_1[1] + 0xa8), iVar2 != 0 &&
      (iVar3 = (**(code **)(*DAT_00469ab4 + 0x20))(), iVar3 != 0)))) {
    iVar2 = *(int *)(iVar2 + 0xc4c);
    if ((iVar2 != 0) &&
       ((*(int *)(iVar2 + 0x14) == 0x62bd076 && (cVar1 = FUN_00088bc0(), cVar1 == '\0')))) {
      FUN_0010caa0();
      return 0;
    }
    iVar2 = FUN_0005c2f0(iVar3);
    iStack_4c = iVar2;
    iVar3 = FUN_0005c3c0(iVar3,auStack_14,param_2);
    if (0 < iVar2) {
      FUN_0010caa0();
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          /* XBE 0x000F7D2D LEA EBX,[ESP+0x18] points to
           * entry ESP-0x4C: iStack_4c, which the preceding
           * 0x000F7D35 MOV [ESP+0x18],EAX populates.
           * Ghidra register0x10 is not an independent pointer.
           * Register-based callee ABI remains ABI_UNVERIFIED. */
          puVar4 = (undefined1 *)&iStack_4c;
          /* XBE 0x000F7D28 LEA ECX,[ESP+0x64] points to
           * original entry ESP+4, the caller-owned first DWORD.
           * 0x000F7D2C PUSH ECX passes its address. */
          FUN_001e97c0(&param_1);
          FUN_0010c660(puVar4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iStack_4c);
      }
      return 1;
    }
    if (0 < iVar3) {
      FUN_0010caa0();
      iVar2 = 0;
      if (0 < iVar3) {
        do {
          iStack_4c = aiStack_24[iVar2];
          piVar5 = &iStack_4c;
          FUN_001e97c0(piVar5);
          FUN_0010c660(piVar5);
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar3);
      }
      return 1;
    }
    (**(code **)(*DAT_00469ab4 + 0x8c))(&stack0xffffffac,auStack_48,param_1);
    if (unaff_EDI != 0) {
      FUN_0010caa0();
      puVar4 = auStack_c;
      FUN_001e97c0(puVar4);
      FUN_0010c660(puVar4);
      return 1;
    }
  }
  return 0;
}
