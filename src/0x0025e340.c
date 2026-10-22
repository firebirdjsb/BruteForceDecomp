/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D56E440C9A647BE10562E0C67E258252959B25DF94A76AF0FCF5E95DB6D94B0
 * Entry: 0x0025e340, Ghidra index: 8590, label: FUN_0025e340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025e340(void)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_EDI;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = *unaff_EDI;
  local_14 = unaff_EDI[2];
  local_10 = unaff_EDI[3];
  iVar1 = unaff_EDI[0x49];
  iVar2 = unaff_EDI[0x48];
  local_4 = unaff_EDI[4];
  local_c = -1;
  local_8 = 0;
  if (iVar2 != iVar1) {
    do {
      FUN_0025e140(&local_18);
      iVar2 = iVar2 + 0x24;
    } while (iVar2 != iVar1);
    if ((local_c != -1) && (local_c + -0x1000 != 0)) {
      XAPILIB__XPhysicalProtect(unaff_EDI[2],local_c + -0x1000,4);
    }
  }
  return;
}
