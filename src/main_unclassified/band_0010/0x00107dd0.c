/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8375A9C0AC82003A77C86EC385CF958B15FD6B4DDF0143952D4CDDDFA22C42C
 * Entry: 0x00107dd0, Ghidra index: 3377, label: FUN_00107dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00107e38) */

undefined1 FUN_00107dd0(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  undefined1 uVar3;
  int iVar4;
  
  uVar3 = 0;
  cVar2 = FUN_00107a40();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(in_EAX + 0x28);
    uVar3 = 1;
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0x2c);
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iVar4 != iVar1) {
        uVar3 = 1;
        do {
          cVar2 = FUN_00107b20(in_EAX,iVar4);
          if ((cVar2 != '\0') && (cVar2 = FUN_00107a90(in_EAX,iVar4), cVar2 == '\0')) {
            return 0;
          }
          iVar4 = iVar4 + 0x18;
        } while (iVar4 != iVar1);
      }
    }
  }
  return uVar3;
}
