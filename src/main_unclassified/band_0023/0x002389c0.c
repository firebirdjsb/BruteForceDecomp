/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C825DAAED037FFBA221393DFBA01C9F0E35DD3EB11535D04FA482280314AC35
 * Entry: 0x002389c0, Ghidra index: 7882, label: FUN_002389c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002389c0(void)

{
  int iVar1;
  int *piVar2;
  int *in_EAX;
  undefined1 local_4 [4];
  
  FUN_00238960(local_4,*in_EAX,0);
  iVar1 = *in_EAX;
  while (iVar1 != 0) {
    piVar2 = (int *)*in_EAX;
    *in_EAX = *piVar2;
    *piVar2 = 0;
    piVar2[1] = 0;
    iVar1 = *in_EAX;
  }
  *in_EAX = 0;
  in_EAX[1] = 0;
  return;
}
