/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40F8B47837CC1BF16B52AD499DF92DC1BAFC072838C9255E941AA1E49405A0C8
 * Entry: 0x003455f1, Ghidra index: 12813, label: FUN_003455f1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003455f1(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  
  if ((in_ECX == 0) || (*(short *)(in_ECX + 0xbd2) == 0)) {
    XAPILIB__SetLastError(0x276d);
    return 0xffffffff;
  }
  iVar1 = FUN_003454a2(param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    uVar3 = 0x10;
  }
  else if (param_2 == 1) {
    uVar3 = 8;
  }
  else {
    uVar3 = 0x18;
  }
  if ((*(uint *)(iVar1 + 0xc) & 2) == 0) {
    iVar2 = FUN_00355398(iVar1,uVar3);
  }
  else {
    if ((*(uint *)(iVar1 + 0xc) & 0x40) == 0) {
      iVar2 = 0x2749;
      goto LAB_00345674;
    }
    iVar2 = FUN_00354426(iVar1,uVar3,1);
  }
  if (iVar2 < 0) {
    iVar2 = RtlNtStatusToDosError(iVar2);
  }
  else {
    iVar2 = 0;
  }
LAB_00345674:
  *(undefined4 *)(iVar1 + 8) = 0x2b434f53;
  if (iVar2 != 0) {
    XAPILIB__SetLastError(iVar2);
    return 0xffffffff;
  }
  return 0;
}
