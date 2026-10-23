/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F02A50E2A771842E0493EEE0D3114CAE32B1724D5FFCF69F2902EAF284BF2097
 * Entry: 0x002da790, Ghidra index: 10269, label: FUN_002da790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002da790(undefined4 param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined4 *in_ECX;
  
  in_ECX[0x10] = in_EAX + 3U & 0xfffffffc;
  in_ECX[0xf] = in_EAX;
  FUN_002da3b0();
  iVar2 = in_ECX[0x10];
  in_ECX[6] = in_ECX[0x22];
  *in_ECX = 0x33d6bf95;
  in_ECX[1] = 0x33d6bf95;
  in_ECX[0x26] = 0x33d6bf95;
  in_ECX[0x38] = 0x33d6bf95;
  in_ECX[0x2d] = in_EAX;
  in_ECX[0x30] = in_ECX[8];
  in_ECX[0x2c] = 0x33d6bf95;
  iVar3 = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x13] = 0;
  in_ECX[2] = 0x38d1b718;
  in_ECX[0x1a] = 0;
  in_ECX[3] = 0x461c4000;
  in_ECX[0x24] = iVar2;
  in_ECX[0x25] = 0;
  in_ECX[0x1b] = 0x358637bd;
  in_ECX[0x2e] = iVar2;
  in_ECX[0x2f] = param_1;
  in_ECX[0x31] = in_ECX[10];
  if (0 < iVar2) {
    do {
      *(int *)(in_ECX[0xd] + iVar3 * 4) = iVar3;
      *(int *)(in_ECX[0xe] + iVar3 * 4) = iVar3;
      pfVar1 = (float *)(param_2 + iVar3 * 4);
      *(undefined4 *)((param_3 - param_2) + (int)pfVar1) = 0;
      if ((int)in_ECX[0xf] <= iVar3) {
        *pfVar1 = 0.0;
      }
      iVar3 = iVar3 + 1;
      *(float *)(in_ECX[9] + -4 + iVar3 * 4) = -*pfVar1;
    } while (iVar3 < (int)in_ECX[0x10]);
  }
  in_ECX[4] = param_1;
  in_ECX[5] = param_2;
  in_ECX[7] = param_3;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x14] = 0;
  FUN_002db430();
  FUN_002dab40();
  in_ECX[0x31] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3b] = 0;
  return;
}
