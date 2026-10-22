/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FD99AD8A699B42116D5471A04366BA570533704A459E05ECEB296DD855219E6
 * Entry: 0x001ab690, Ghidra index: 5508, label: FUN_001ab690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001ab690(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBX;
  
  if (in_EAX == 0) {
    if (*unaff_EBX != 0) {
      FUN_000e11e0(1);
    }
    *unaff_EBX = 0;
    return;
  }
  if (*unaff_EBX == 0) {
    iVar1 = FUN_002ea01d(0x10);
    if (iVar1 != 0) {
      FUN_001b7c70(iVar1);
      *unaff_EBX = iVar1;
      return;
    }
    *unaff_EBX = 0;
  }
  return;
}
