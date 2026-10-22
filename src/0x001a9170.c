/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4F38C04F2719BC1C8F93F2C3D9B44FB84DE2985EB31B13027A9DDBABA58A77F
 * Entry: 0x001a9170, Ghidra index: 5457, label: FUN_001a9170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a9170(void)

{
  int *in_EAX;
  int iVar1;
  int in_EDX;
  
  iVar1 = *in_EAX;
  if ((iVar1 != 0) == 0) {
    in_EDX = 1;
  }
  if ((uint)(iVar1 != 0) + in_EDX == 0) {
    FUN_00051760();
  }
  else {
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_001b4ef0(in_EAX);
    FUN_00051800();
  }
  iVar1 = *in_EAX;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}
