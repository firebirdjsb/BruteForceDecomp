/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFBA8F561A7BD66D1CCCF775D4DFE4E71CFEE3A7C5C4F2BA805C7FB377137E3B
 * Entry: 0x00343dcb, Ghidra index: 12726, label: FUN_00343dcb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; direct CALL targets checked against the pinned XBE.
 * ABI_UNVERIFIED: source signatures are not recovered Xbox/native interfaces.
 */
extern void FUN_003430a1(int param_1);
extern void FUN_00343377(int param_1,undefined4 param_2);
extern bool FUN_003439cc(int param_1,int param_2);
bool FUN_00343dcb(int param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -0x3eb;
  if (param_2 == 0) {
    param_2 = param_1;
  }
  if (param_3 == (char *)0x0) {
    iVar1 = FUN_003439cc(param_2,2);
    if (iVar1 == 0) {
      iVar2 = -0x3ea;
      goto LAB_00343e20;
    }
    param_3 = *(char **)(param_2 + 0x24);
    if ((*param_3 != '\0') || (param_3[1] != '\0')) goto LAB_00343e20;
    param_3 = param_3 + 2;
    *(char **)(param_2 + 0x24) = param_3;
    if (param_2 != param_1) goto LAB_00343dee;
  }
  else {
    if (*(char **)(param_2 + 0x24) != param_3) goto LAB_00343e20;
LAB_00343dee:
    *(char **)(param_1 + 0x24) = param_3;
  }
  iVar2 = 0;
LAB_00343e20:
  if ((param_2 != 0) && (param_2 != param_1)) {
    FUN_003430a1(param_2);
  }
  if (iVar2 != 0) {
    FUN_00343377(param_1,iVar2);
  }
  return iVar2 == 0;
}
