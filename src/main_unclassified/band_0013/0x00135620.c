/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A33DF45034C8A1FAD1809DA8C9FA51BAE16DC8DBEDA24356552BE1FAD77C14C
 * Entry: 0x00135620, Ghidra index: 3880, label: FUN_00135620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00135620(void)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  int local_10;
  undefined4 local_c;
  
  local_10 = FUN_0025ae60();
  *(undefined1 *)(local_10 + 0x15) = 1;
  *(int *)(local_10 + 4) = local_10;
  *(int *)local_10 = local_10;
  *(int *)(local_10 + 8) = local_10;
  iVar2 = *(int *)(in_EAX + 4);
  local_c = 0;
  if (iVar2 != *(int *)(in_EAX + 8)) {
    local_3c = iVar2 + 8;
    local_40 = iVar2;
    do {
      local_38 = *(int *)(local_3c + -4);
      if (local_38 == 0) {
        FUN_00045180(&local_38,local_3c);
        FUN_0001d590();
LAB_00135763:
        *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + -8;
      }
      else {
        local_30 = 0;
        local_34 = local_38;
        piVar1 = (int *)FUN_00135410();
        if (*(char *)(*piVar1 + 0x10) == '\x01') {
          FUN_00045180(&local_38,local_3c);
          FUN_0001d590();
          iVar2 = local_40;
          goto LAB_00135763;
        }
        local_2c = local_38;
        local_28 = 0;
        piVar1 = (int *)FUN_00135410();
        *(undefined1 *)(*piVar1 + 0x10) = 1;
        iVar2 = local_40 + 8;
        local_3c = local_3c + 8;
        local_40 = iVar2;
      }
    } while (iVar2 != *(int *)(in_EAX + 8));
  }
  FUN_00138830();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
