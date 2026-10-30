/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6ACB6AA0DD665C3104C69E8F22C92403B859882CD996550163C14EC909D235CC
 * Entry: 0x0007aa00, Ghidra index: 1459, label: FUN_0007aa00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern bool FUN_0007a970(void);
extern undefined4 FUN_0007a7c0(int *param_1);
extern char FUN_0007ab60(int *param_1,char *param_2,wchar_t *param_3);
extern void FUN_000855a0(void);

extern uint32_t DAT_0040dd48;
/* WARNING: Removing unreachable block (ram,0x0007ab3e) */
/* WARNING: Removing unreachable block (ram,0x0007aaee) */

void FUN_0007aa00(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_344 [320];
  undefined1 local_204 [260];
  undefined1 local_100 [256];
  
  iVar5 = 0;
  iVar4 = 2;
  iVar2 = XAPILIB__XFindFirstSaveGame(&DAT_0040dd48,local_344);
  if (iVar2 != -1) {
    do {
      cVar1 = FUN_0007a970();
      if (cVar1 == '\0') {
        if ((0x1f < iVar4) || (cVar1 = FUN_0007a7c0(param_1,local_100), cVar1 != '\0')) {
          iVar4 = iVar4 + 1;
        }
      }
      else if ((0x1f < iVar5) || (cVar1 = FUN_0007ab60(param_1,local_204,local_100), cVar1 != '\0'))
      {
        iVar5 = iVar5 + 1;
      }
      iVar3 = XAPILIB__XFindNextSaveGame(iVar2,local_344);
    } while (iVar3 != 0);
    XAPILIB__XFindClose(iVar2);
    if (0x20 < iVar5) {
      FUN_000855a0();
    }
    if (0x20 < iVar4) {
      FUN_000855a0();
    }
  }
  return;
}
