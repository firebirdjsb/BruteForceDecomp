/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F4DC5099AFFAE8D81D160AC7CE52F4747993DED9748E1BD8B249541A9C59FC9
 * Entry: 0x0038156d, Ghidra index: 13567, label: FUN_0038156d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0038156d(undefined4 *param_1,uint param_2)

{
  *(uint *)(param_1[4] + 0x10) = param_2;
  if ((param_2 & 0xc0000000) == 0xc0000000) {
    *(undefined4 *)(param_1[4] + 0x14) = 0;
  }
  else {
    *(undefined4 *)(param_1[4] + 0x14) = param_1[0xb];
  }
  IofCompleteRequest();
  IoStartNextPacket(*param_1);
  return;
}
