/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C64C6AE12BC115B14524EDDDFD3BC61F6046C98C85624B7287C81EF620F7C13
 * Entry: 0x000ef000, Ghidra index: 2967, label: FUN_000ef000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ef000(undefined4 param_1,float param_2)

{
  undefined4 *in_ECX;
  undefined4 unaff_EBX;
  float *pfVar1;
  int iVar2;
  float local_40 [7];
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  if (0.0 < param_2) {
    local_18 = in_ECX[2];
    local_8 = in_ECX[2];
    pfVar1 = local_40 + 3;
    local_40[3] = (float)in_ECX[3];
    iVar2 = 4;
    local_40[6] = (float)in_ECX[3] - param_2;
    local_40[4] = (float)*in_ECX;
    local_24 = in_ECX[3];
    local_40[5] = (float)in_ECX[1];
    local_20 = (float)in_ECX[1] - param_2;
    local_14 = in_ECX[3];
    local_1c = in_ECX[1];
    local_10 = *in_ECX;
    local_4 = param_2 + (float)in_ECX[2];
    local_c = in_ECX[1];
    do {
      FUN_000ee6e0(param_1,pfVar1[-1],pfVar1[-3],*pfVar1 - pfVar1[-1],pfVar1[-2] - pfVar1[-3],
                   unaff_EBX,0xf83fc948,0);
      pfVar1 = pfVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
