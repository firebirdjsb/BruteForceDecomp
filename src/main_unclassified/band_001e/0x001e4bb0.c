/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC44ACAACCABFEFEFDC26E42FAFC75E3D29BD9F4C8E96B4480EA36275D7E2989
 * Entry: 0x001e4bb0, Ghidra index: 6787, label: FUN_001e4bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432f8;
extern char s_z__cacheinfo_bin_00407558[];
/* WARNING: Removing unreachable block (ram,0x001e4c21) */
/* WARNING: Removing unreachable block (ram,0x001e4c29) */
/* WARNING: Removing unreachable block (ram,0x001e4c2f) */

uint FUN_001e4bb0(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  uVar1 = FUN_00238370();
  *(undefined4 *)(unaff_EDI + 0xc) = uVar1;
  iVar2 = (**(code **)(*DAT_004432f8 + 0xc))(DAT_004432f8);
  if (-1 < iVar2) {
    (**(code **)(s_z__cacheinfo_bin_00407558._0_4_ + 0x14))(s_z__cacheinfo_bin_00407558);
  }
  uVar3 = (**(code **)(s_z__cacheinfo_bin_00407558._0_4_ + 8))(s_z__cacheinfo_bin_00407558);
  return uVar3 & 0xffffff00;
}
