/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4EAB6557C599EFCD081A27EA7C39F05D404297DCA1E2A6824C7D94BD7F66CB7
 * Entry: 0x00141630, Ghidra index: 4103, label: FUN_00141630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00141630(undefined4 *param_1)

{
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined4 *local_8;
  
  local_1c[0] = param_1._0_1_;
  local_18 = FUN_002ad910(local_1c);
  *(undefined1 *)(local_18 + 0x1d) = 1;
  *(int *)(local_18 + 4) = local_18;
  *(int *)local_18 = local_18;
  *(int *)(local_18 + 8) = local_18;
  local_10 = *param_1;
  local_14 = 0;
  FUN_00142140(local_c);
  FUN_00141aa0(&local_10);
  FUN_00141cc0(&param_1,*local_8,local_8);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_8);
}
