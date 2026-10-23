/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 214F28CCCECD5A3A44F3A647497F69569C954908FECCDD7A1AD0C402C764819D
 * Entry: 0x0014dc50, Ghidra index: 4377, label: FUN_0014dc50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014dc50(void)

{
  int iVar1;
  int in_EAX;
  int *in_EDX;
  int *unaff_ESI;
  
  *in_EDX = in_EAX;
  *unaff_ESI = in_EAX + 0x44;
  iVar1 = *(int *)(in_EAX + 0x1d0);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      *in_EDX = in_EAX + 0x178;
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      *unaff_ESI = in_EAX + 0x178;
    }
  }
  iVar1 = *(int *)(in_EAX + 0x1cc);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      *in_EDX = in_EAX + 0x144;
      return;
    }
    if (iVar1 == 2) {
      *unaff_ESI = in_EAX + 0x144;
    }
  }
  return;
}
