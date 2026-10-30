/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDB0EAE48E0DF142D9E3C61D499769E175FAE9411CEAA5814D0BC4FDB630AD1B
 * Entry: 0x000bd200, Ghidra index: 2307, label: FUN_000bd200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bd200(int param_1,undefined4 param_2,int param_3)

{
  undefined4 local_4;
  
  FUN_002385a0();
  local_4 = 1;
  FUN_0006a610(&local_4);
  local_4 = 0;
  FUN_0006a610(&local_4);
  local_4 = 0;
  FUN_0006a610(&local_4);
  local_4 = 0;
  FUN_0006a610(&local_4);
  local_4 = 1;
  FUN_0006a610(&local_4);
  FUN_00062280();
  local_4 = 1;
  FUN_0006a610(&local_4);
  local_4 = 1;
  FUN_0006a610(&local_4);
  local_4 = 0;
  FUN_0006a610(&local_4);
  if (*(int *)(param_1 + 0x10) != param_3) {
    FUN_0008f6a0(param_3);
  }
  FUN_000bca40(param_2);
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0008f6a0(0);
  }
  FUN_00238630();
  return;
}
