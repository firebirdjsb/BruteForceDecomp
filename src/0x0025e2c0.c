/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D6D82156C9687B2A4764EEE6C50F5C6864E4210AF3C46206A98BACCA5DDCD2A
 * Entry: 0x0025e2c0, Ghidra index: 8589, label: FUN_0025e2c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025e2c0(void)

{
  int iVar1;
  uint uVar2;
  int *unaff_EDI;
  
  if (unaff_EDI[2] != 0) {
    uVar2 = unaff_EDI[3] & 0x80000fff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffff000) + 1;
    }
    iVar1 = (unaff_EDI[3] - uVar2) + 0x1000;
    unaff_EDI[3] = iVar1;
    XAPILIB__XPhysicalProtect(unaff_EDI[2],iVar1,4);
    FUN_00237e40();
    unaff_EDI[2] = 0;
  }
  unaff_EDI[3] = 0;
  if (*unaff_EDI != 0) {
    FUN_00237e40();
    *unaff_EDI = 0;
  }
  unaff_EDI[1] = 0;
  if (unaff_EDI[4] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_EDI[4]);
  }
  FUN_00243560();
  return;
}
