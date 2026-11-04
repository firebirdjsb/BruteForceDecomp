/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6394877AA710A5DBCF2BF09E292C7E175304E3AFBFF66E5E4C73B2210C64039A
 * Entry: 0x002a6850, Ghidra index: 9589, label: FUN_002a6850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_002a6630(int *param_1);
/* WARNING: Removing unreachable block (ram,0x002a68eb) */

void FUN_002a6850(void)

{
  int *unaff_EBX;
  int *unaff_ESI;
  int iVar1;
  
  (**(code **)(*unaff_ESI + 0x28))();
  (**(code **)(*unaff_ESI + 0x18))();
  (**(code **)(*unaff_ESI + 0x1c))();
  (**(code **)(*unaff_EBX + 0x14))();
  iVar1 = 0;
  do {
    (**(code **)(*unaff_ESI + 0x14))();
    FUN_002a6630(0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 9);
  return;
}
