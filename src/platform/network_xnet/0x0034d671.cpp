/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5477376BF5FD5EA46E76AA18B51441162C87E1DB08FC573E189E7484A7DAC494
 * Entry: 0x0034d671, Ghidra index: 13005, label: FUN_0034d671
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; direct CALL targets checked against the pinned XBE.
 * ABI_UNVERIFIED: source signatures are not recovered Xbox/native interfaces.
 */
extern void FUN_003561dd(undefined4 *param_1,int param_2);
void FUN_0034d671(uint param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = param_2;
  local_14 = param_3;
  local_12 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = (param_1 & 1) << 0x18;
  FUN_003561dd(&local_18,param_4);
  return;
}
