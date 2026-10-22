/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 978C5764BCC5D0B70B596459DEC57796B69D9E2A05DF58C3738D7450CA445759
 * Entry: 0x00298ba0, Ghidra index: 9365, label: FUN_00298ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00298ba0(int param_1,int param_2)

{
  undefined4 local_14 [2];
  double local_c;
  
  local_14[0] = 0xffffffff;
  local_c = (double)param_1;
  FUN_00293c90(local_14);
  local_14[0] = 0xffffffff;
  local_c = (double)param_2;
  FUN_00293c90(local_14);
  local_14[0] = 0xffffffff;
  local_c = (double)param_1;
  FUN_00293f40();
  local_14[0] = 0xffffffff;
  local_c = (double)param_2;
  FUN_00293f40();
  return;
}
