/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDBA4BB84BA4350C54A9A5A29098E3863F6AF578C7D4BFB969C524F9793B18AF
 * Entry: 0x002b6400, Ghidra index: 9821, label: FUN_002b6400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b6400(int param_1,int param_2,int param_3)

{
  float local_10;
  undefined8 local_c;
  undefined4 local_4;
  
  local_4 = 0;
  local_10 = *(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x30);
  local_c = CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 0x34) >> 0x20) -
                     (float)((ulonglong)*(undefined8 *)(param_1 + 0x34) >> 0x20),
                     (float)*(undefined8 *)(param_2 + 0x34) - (float)*(undefined8 *)(param_1 + 0x34)
                    );
  FUN_002b73d0(param_1,&local_10,param_3 + 0x30);
  FUN_002b6100(param_1,param_2,param_3);
  return;
}
