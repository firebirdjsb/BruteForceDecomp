/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 532E5233681831960B0FB79CC98EE333B6F591205BF6ECA245EA4538856879DF
 * Entry: 0x00279280, Ghidra index: 8928, label: FUN_00279280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00279280(void)

{
  undefined4 *in_EAX;
  int *piVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = *in_EAX;
  local_c = 0;
  piVar1 = (int *)FUN_00279c40(&local_10);
  return *piVar1 + 0x10;
}
