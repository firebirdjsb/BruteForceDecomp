/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9839710CD75A966262F29B36E46FA502E7E87619316C668ECB7A5DE94A1644A1
 * Entry: 0x00292790, Ghidra index: 9254, label: FUN_00292790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s___16g_00404958[];
undefined4 FUN_00292790(void)

{
  int iVar1;
  int *unaff_EDI;
  undefined1 local_20 [32];
  
  if (*unaff_EDI != -1) {
    return 1;
  }
  FUN_002eaa86(local_20,s___16g_00404958,unaff_EDI[2],unaff_EDI[3]);
  iVar1 = FUN_00294810();
  unaff_EDI[2] = iVar1;
  *unaff_EDI = -2;
  return 0;
}
