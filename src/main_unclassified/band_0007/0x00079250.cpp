/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77159C94E6F9006EC7CECE6EB71E2493C79E61A23318FA8B00A68C3A609AC17C
 * Entry: 0x00079250, Ghidra index: 1444, label: FUN_00079250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00079250(void)

{
  char cVar1;
  undefined4 ****ppppuVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  int local_48;
  int local_44 [5];
  int local_30 [6];
  undefined4 ***local_18 [4];
  undefined4 local_8;
  uint local_4;
  
  bVar7 = false;
  local_4 = 0xf;
  local_8 = 0;
  local_18[0] = (undefined4 ***)((uint)local_18[0] & 0xffffff00);
  FUN_000791c0();
  ppppuVar2 = (undefined4 ****)local_18[0];
  if (local_4 < 0x10) {
    ppppuVar2 = local_18;
  }
  iVar3 = FUN_002f2b3f(ppppuVar2,0x80000000,0,0,3,0,0);
  if (iVar3 != -1) {
    local_48 = 0;
    iVar4 = XAPILIB__ReadFile(iVar3,local_44,0x14,&local_48,0);
    if (((iVar4 != 0) && (local_48 == 0x14)) && (cVar1 = FUN_00079130(local_30), cVar1 != '\0')) {
      iVar4 = 5;
      bVar7 = true;
      piVar5 = local_30;
      piVar6 = local_44;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar7 = *piVar5 == *piVar6;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (bVar7);
    }
    XAPILIB__CloseHandle(iVar3);
  }
  if (local_4 < 0x10) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_18[0]);
}
