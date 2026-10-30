/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98EEA58464E415760DB6A7043ACDFD0D2E11A106D2EBEF812C2E8E0DB6049986
 * Entry: 0x00219d00, Ghidra index: 7503, label: FUN_00219d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE: two guest DWORDs / RET 8 and EAX result; ECX/EDX unresolved. */
extern uint32_t FUN_00160da0(uint32_t guest_word0, uint32_t guest_word1);
void FUN_00219d00(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int unaff_EBX;
  int iVar6;
  int *local_c;
  
  iVar1 = *(int *)(unaff_EBX + 8);
  iVar2 = *(int *)(param_1 + 0xc0);
  iVar6 = *(int *)(param_1 + 0xbc);
  local_c = (int *)0x0;
  for (; iVar6 != iVar2; iVar6 = iVar6 + 4) {
    piVar4 = (int *)FUN_00160da0(0xffffffff,1);
    if ((piVar4 != (int *)0x0) &&
       (((iVar3 = piVar4[1], iVar3 != 4 ||
         (((((*(byte *)(iVar1 + 0xc50) & 4) == 0 || ((*(byte *)(piVar4 + 3) & 2) == 0)) ||
           ((*(byte *)(param_1 + 0xc) & 2) == 0)) && (param_2 == '\0')))) &&
        (piVar4 = (int *)(**(code **)(*piVar4 + 8))(iVar1), piVar4 != (int *)0x0)))) {
      FUN_000da880(iVar1,piVar4,1);
      FUN_000da8f0(iVar1);
      (**(code **)(*piVar4 + 0xe0))();
      if ((local_c == (int *)0x0) && (iVar3 == 4)) {
        if (*(int *)(unaff_EBX + 0xec) == 0) {
          puVar5 = (undefined4 *)FUN_002ea01d(0x14);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[4] = 0;
            *puVar5 = 0;
          }
          *(undefined4 **)(unaff_EBX + 0xec) = puVar5;
        }
        FUN_0021d040(unaff_EBX,piVar4,iVar1);
        local_c = piVar4;
      }
    }
  }
  return;
}
