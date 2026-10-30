/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B124A18818151C9F6009324C7A5DD3341266A617F9800F8104EC42B29E08459
 * Entry: 0x00078280, Ghidra index: 1422, label: FUN_00078280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
extern void FUN_00076680(void);

bool FUN_00078280(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_002ea01d(0x34);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00076680();
  }
  *param_2 = iVar1;
  return -1 < (int)((iVar1 != 0) - 1);
}
