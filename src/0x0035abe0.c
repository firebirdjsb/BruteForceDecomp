/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04C032514CF7F00C5E622829BF55D93949346B53EF55685BD2C3C42DC5EC2594
 * Entry: 0x0035abe0, Ghidra index: 13183, label: FUN_0035abe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035abe0(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  XAPILIB__SetEvent(unaff_ESI[2]);
  *unaff_ESI = 3;
  if (iVar1 == 0) {
    XAPILIB__ResumeThread(unaff_ESI[3]);
  }
  else if (iVar1 == 2) {
    XAPILIB__ReleaseMutex(unaff_ESI[5]);
    return;
  }
  return;
}
