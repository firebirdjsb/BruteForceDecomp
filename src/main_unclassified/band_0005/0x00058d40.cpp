/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4B355EE3C39721B70CD7AA318BE6E1E00170D8FCD764E71B40908438EBADFE1
 * Entry: 0x00058d40, Ghidra index: 884, label: FUN_00058d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
void FUN_00058d40(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_002ea01d(0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *param_1 = iVar1;
    FUN_001aaa90();
    return;
  }
  *param_1 = 0;
  FUN_001aaa90();
  return;
}
