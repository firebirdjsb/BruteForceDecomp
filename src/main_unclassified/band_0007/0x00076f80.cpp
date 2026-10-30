/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95FC7286A9C42A63FAE06BE220ED969B5550E58794C920CD200C5805FA47B3A8
 * Entry: 0x00076f80, Ghidra index: 1387, label: FUN_00076f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00076f80(void)

{
  int *in_EAX;
  int iVar1;
  int *unaff_EDI;
  
  (**(code **)(*unaff_EDI + 0x18))();
  (**(code **)(*in_EAX + 0x18))();
  iVar1 = (**(code **)(*unaff_EDI + 0x24))();
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EDI + 0x28))();
  }
  FUN_00239dc0();
  return iVar1;
}
