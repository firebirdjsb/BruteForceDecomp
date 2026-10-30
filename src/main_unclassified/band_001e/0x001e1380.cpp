/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D437B2F26502458680F9F6C597E5F1ECFB26AA27B0A36B02022E7370494EA402
 * Entry: 0x001e1380, Ghidra index: 6731, label: FUN_001e1380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e1380(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  iVar2 = *(int *)(in_EAX + 8);
  iVar5 = *(int *)(in_EAX + 4);
  while( true ) {
    if (iVar5 == iVar2) {
      return;
    }
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      pcVar4 = (char *)(iVar5 + 4);
    }
    else {
      pcVar4 = *(char **)(iVar5 + 4);
    }
    local_4 = 0xf;
    local_8 = 0;
    local_18 = local_18 & 0xffffff00;
    if (pcVar4 == (char *)0x0) {
      FUN_0001f5a0(0,0xffffffff);
    }
    else {
      pcVar3 = pcVar4;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_0001fed0(pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));
    }
    FUN_000764c0(local_1c);
    if (0xf < local_4) break;
    iVar5 = iVar5 + 0x1c;
    local_18 = local_18 & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_18);
}
