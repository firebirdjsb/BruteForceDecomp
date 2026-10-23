/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97B3CF8A3411032C3462BC7B80B90FAB8C0E5D4BCAA827A326B941D855E1C831
 * Entry: 0x002c7250, Ghidra index: 10096, label: FUN_002c7250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c7250(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  iVar1 = FUN_002ea01d(0x2c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_002c79a0(0);
  }
  iVar1 = FUN_002ea01d(0x2c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_002c79a0(0);
  }
  in_ECX[10] = iVar1;
  (**(code **)(*in_ECX + 8))(uVar2);
  (**(code **)(*in_ECX + 8))(in_ECX[10]);
  return;
}
