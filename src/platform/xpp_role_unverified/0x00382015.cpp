/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13AFB046D43487E65D503106830E2626FB7854C682988A5EDDA101CD76BB440B
 * Entry: 0x00382015, Ghidra index: 13581, label: FUN_00382015
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00382015(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  pcVar2 = *(char **)(param_2 + 0x5c);
  cVar3 = HalIsResetOrShutdownPending();
  if (cVar3 == '\0') {
    *(int *)(pcVar2 + 0x14) = param_1;
    *(int *)(iVar1 + 0x10) = param_2;
    cVar3 = *pcVar2;
    if (cVar3 != '\x02') {
      if (cVar3 != '\x03') {
        if (cVar3 != '\n') {
          return;
        }
        FUN_00381db5(iVar1,param_2);
        return;
      }
      IoMarkIrpMustComplete(param_2);
    }
    FUN_00381e85();
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 0xc0000240;
    IofCompleteRequest();
    IoStartNextPacket(param_1);
  }
  return;
}
