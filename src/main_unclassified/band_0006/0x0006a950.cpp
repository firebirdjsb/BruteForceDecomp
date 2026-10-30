/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDCAEC108A6C499FE21557416458BCB8D002E0196A3FE25FAC6DE0A4500BD4C1
 * Entry: 0x0006a950, Ghidra index: 1205, label: FUN_0006a950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006a950(int param_1,char param_2,float param_3,float param_4,uint param_5,float param_6)

{
  *(byte *)(param_1 + 0x4c) =
       *(byte *)(param_1 + 0x4c) ^ (param_2 << 2 ^ *(byte *)(param_1 + 0x4c)) & 4;
  *(char *)(param_1 + 0x115) = (char)(int)(param_3 * 255.0);
  *(char *)(param_1 + 0x114) = (char)(int)(param_4 * 255.0);
  *(uint *)(param_1 + 0x11c) =
       *(uint *)(param_1 + 0x11c) ^ (*(uint *)(param_1 + 0x11c) ^ param_5) & 3;
  *(char *)(param_1 + 0x116) = (char)(int)((param_6 + 1.0) * 127.5);
  return;
}
