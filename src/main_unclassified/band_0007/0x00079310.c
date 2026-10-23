/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5675125A0C1230A9310749D1DCD5E2D0965361472FE7F7AC2AC9DE596D931167
 * Entry: 0x00079310, Ghidra index: 1445, label: FUN_00079310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00079310(void)

{
  char cVar1;
  undefined4 ****ppppuVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 local_34;
  undefined1 local_30 [24];
  undefined4 ***local_18 [4];
  undefined4 local_8;
  uint local_4;
  
  uVar4 = 0;
  local_4 = 0xf;
  local_8 = 0;
  local_18[0] = (undefined4 ***)((uint)local_18[0] & 0xffffff00);
  FUN_000791c0();
  cVar1 = FUN_00079130(local_30);
  if (cVar1 != '\0') {
    ppppuVar2 = (undefined4 ****)local_18[0];
    if (local_4 < 0x10) {
      ppppuVar2 = local_18;
    }
    iVar3 = FUN_002f2b3f(ppppuVar2,0x40000000,0,0,4,0,0);
    if (iVar3 != -1) {
      local_34 = 0;
      XAPILIB__WriteFile(iVar3,local_30,0x14,&local_34,0);
      XAPILIB__CloseHandle(iVar3);
      uVar4 = 1;
    }
  }
  if (0xf < local_4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_18[0]);
  }
  return uVar4;
}
