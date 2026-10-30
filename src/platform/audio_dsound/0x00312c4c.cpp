/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D413D12E4C5B585256F3E10F113D84FB4BA57B1EDEC0C7E1ABD28611B898217
 * Entry: 0x00312c4c, Ghidra index: 11979, label: XFileCreateMediaObjectAsync
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int DSOUND__XFileCreateMediaObjectAsync(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_003118df(0x44);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_0031a84c();
  }
  iVar1 = (-(uint)(piVar2 != (int *)0x0) & 0x7ff8fff2) + 0x8007000e;
  if (-1 < iVar1) {
    iVar1 = FUN_0031a589(piVar2,param_1,param_2);
    if (-1 < iVar1) {
      uVar3 = FUN_00312668(piVar2);
      *param_3 = uVar3;
    }
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return iVar1;
}
