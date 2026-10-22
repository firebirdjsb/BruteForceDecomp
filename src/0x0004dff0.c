/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B713F3635C27568762849EE123EF6CCA44BFA8EB6E2A6CB00B5D12231E8088A7
 * Entry: 0x0004dff0, Ghidra index: 664, label: FUN_0004dff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004dff0(void)

{
  int in_EAX;
  int *in_ECX;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  local_c = *(undefined4 *)(in_EAX + 8);
  (**(code **)(*in_ECX + 0x1c))(&local_20);
  return;
}
