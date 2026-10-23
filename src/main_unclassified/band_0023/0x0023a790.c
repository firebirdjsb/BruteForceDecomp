/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B2F24405CE94AC8095D8823541380F0A123E38B41A3D67DA576C2BB558CCF28B
 * Entry: 0x0023a790, Ghidra index: 7902, label: FUN_0023a790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0023a790(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int *in_ECX;
  undefined4 unaff_EBX;
  int unaff_ESI;
  int *unaff_EDI;
  int local_8;
  char cStack_4;
  
  local_8 = 0;
  iVar1 = (**(code **)*in_ECX)();
  if (iVar1 < 0) {
LAB_0023a868:
    if (&local_8 != (int *)0x0) {
      (**(code **)(local_8 + 8))(&local_8);
    }
    return 0;
  }
  piVar2 = (int *)(**(code **)(local_8 + 0xc))(&local_8,&stack0xfffffff0);
  if ((*piVar2 == unaff_ESI) &&
     ((in_EAX != 0 || (in_EAX = (**(code **)(*in_ECX + 0x10))(in_ECX), in_EAX != 0)))) {
    iVar1 = (**(code **)(*in_ECX + 0x18))(in_ECX,in_EAX,unaff_EBX);
    if (-1 < iVar1) {
      (**(code **)(*unaff_EDI + 0x18))();
      (**(code **)(*in_ECX + 0x18))();
      iVar1 = (**(code **)(*unaff_EDI + 0x24))();
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*unaff_EDI + 0x28))();
      }
      FUN_00239dc0();
      if (-1 < iVar1) {
        if (&local_8 != (int *)0x0) {
          (**(code **)(local_8 + 8))(&local_8);
        }
        return in_EAX;
      }
      if (cStack_4 == '\0') {
        (**(code **)(local_8 + 0x14))(&local_8,in_EAX);
      }
      goto LAB_0023a868;
    }
    if ((char)unaff_EBX == '\0') {
      (**(code **)(*in_ECX + 0x14))(in_ECX,in_EAX);
    }
  }
  if (in_ECX != (int *)0x0) {
    (**(code **)(*in_ECX + 8))(in_ECX);
  }
  return 0;
}
