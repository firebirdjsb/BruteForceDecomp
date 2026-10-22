/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 806687A70FA8EB93135916A3CCEF239CD4CEF57B33725DA1A498E248058B6DFC
 * Entry: 0x001e2040, Ghidra index: 6743, label: FUN_001e2040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e2040(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int in_EAX;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  if (param_2 == 5) {
    FUN_001cdab0();
  }
  iVar6 = *(int *)(in_EAX + 4);
  iVar2 = *(int *)(in_EAX + 8);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  while( true ) {
    if (iVar6 == iVar2) {
      FUN_001e14c0();
      FUN_001e14c0();
      uVar3 = FUN_001e1f40();
      iVar6 = local_28;
      if (local_28 != 0) {
        FUN_000762d0(local_2c,uVar3);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar6);
      }
      return;
    }
    if (*(uint *)(iVar6 + 0x18) < 0x10) {
      pcVar5 = (char *)(iVar6 + 4);
    }
    else {
      pcVar5 = *(char **)(iVar6 + 4);
    }
    local_4 = 0xf;
    local_8 = 0;
    local_18 = local_18 & 0xffffff00;
    pcVar4 = pcVar5;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
    FUN_000764c0(local_1c);
    FUN_000764c0(local_1c);
    if (0xf < local_4) break;
    iVar6 = iVar6 + 0x1c;
    local_4 = 0xf;
    local_8 = 0;
    local_18 = local_18 & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_18);
}
