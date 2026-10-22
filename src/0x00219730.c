/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E9A61E92716E28F9B06DBEF75DBAC791A6E20B1297D52F448976D633EA0BC24
 * Entry: 0x00219730, Ghidra index: 7499, label: FUN_00219730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00219730(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_002ea01d(300);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00219770();
    (**(code **)(*piVar2 + 4))();
    return piVar2;
  }
  (**(code **)(_DAT_00000000 + 4))();
  return (int *)0x0;
}
