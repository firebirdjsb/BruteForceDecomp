/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC0CF6AAE01B38D61E4C11520CCD06686FBB585BB5DA1AE1A82D6C8EE2091D5C
 * Entry: 0x00316df5, Ghidra index: 12164, label: CMcpxStream_Discontinuity
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__CMcpxStream_Discontinuity(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0031672b();
  if (iVar1 == 0) {
    uVar2 = CMcpxStream_Stop_Ex(0,0,1);
  }
  else {
    FUN_00318d9f();
  }
  return uVar2;
}
